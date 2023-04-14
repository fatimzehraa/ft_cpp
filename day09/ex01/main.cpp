#include "RPN.hpp"
#include <iostream>
#include <string>

int is_op(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return 1;
	return 0;
}

int inverted_polish_notation(std::string str)
{
	int i = 0;
	while (str[i] == ' ')
		i++;
	if (!isdigit(str[i]))
		return 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (!isdigit(str[i]) && !is_op(str[i]))
			return 0;
		if (isdigit(str[i]) && isdigit(str[i + 1]))
			return 0;
		if (is_op(str[i]) && is_op(str[i + 1]))
			return 0;
		i++;
	}
	if (!is_op(str[i - 1]))
		return 0;
	return 1;
}

int main (int argc, char *argv[])
{
	if (argc != 2 || !inverted_polish_notation(argv[1]))
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	RPN rpn(argv[1]);

	std::cout << rpn.calculate() << std::endl;
	return 0;
}
