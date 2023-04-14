#include "RPN.hpp"

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

float RPN::calculate()
{
	std::stringstream ss(_str);
	ss >> _num1;
	_stack.push(_num1);
	while (ss >> _num2)
	{
		_result = _num2;
		ss >> _op;
		if (_op == '+')
			_result = _stack.top() + _result;
		else if (_op == '-')
			_result = _stack.top() - _result;
		else if (_op == '*')
			_result = _stack.top() * _result;
		else if (_op == '/')
		{
			if (_result == 0)
			{
				std::cout << "Error" << std::endl;
				exit(1);
			}
			_result = _stack.top() / _result;
		}
		else
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		_stack.pop();
		_stack.push(_result);
	}
	return _result;
}

RPN::~RPN()
{
}
