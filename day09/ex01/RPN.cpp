#include "RPN.hpp"
#include <iostream>
#include <sstream>

RPN::RPN(std::string str)
{
	_str = str;
}

RPN::RPN(const RPN &rpn)
{
	*this = rpn;
}

RPN &RPN::operator=(const RPN &old_obj)
{
	_str = old_obj._str;
	_stack = old_obj._stack;
	_result = old_obj._result;
	_num1 = old_obj._num1;
	_num2 = old_obj._num2;
	_op = old_obj._op;
	return *this;
}

void RPN::do_op(char op)
{
	if (op == '+')
		_result = _num2 + _num1;
	else if (op == '-')
		_result = _num2 - _num1;
	else if (op == '*')
		_result = _num2 * _num1;
	else if (op == '/')
	{
		if (_num1 == 0)
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		_result = _num2 / _num1;
	}
	else
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	_stack.push(_result);
}

float RPN::calculate()
{
	std::stringstream ss(_str);

	while (ss >> n)
	{
		if (isdigit(n))
			_stack.push(n - '0');
		else {
			if (_stack.size() < 2)
			{
				std::cout << "Error" << std::endl;
				exit(1);
			}
			_num1 = _stack.top();
			_stack.pop();
			_num2 = _stack.top();
			_stack.pop();
			do_op(n);
		}
	}
	if (_stack.size() != 1)
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	if (_stack.size() == 1)
		_result = _stack.top();
	return _result;
}

RPN::~RPN()
{
}
