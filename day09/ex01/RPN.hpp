#ifndef RPN_HPP
# define RPN_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <stack>
class RPN
{
public:
	RPN(std::string);
	RPN(RPN&);
	RPN(const RPN &);
	RPN&operator=(const RPN&);
	void do_op(char);
	float calculate_op();
	float calculate();
	~RPN();
 
private:
	std::string _str;
	std::stack<float> _stack;
	float _result;
	float _num1;
	float _num2;
	char n;
	char _op;
};
#endif
