#include "RPN.hpp"
#include <iostream>
#include <string>

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	RPN rpn(argv[1]);

	std::cout << rpn.calculate() << std::endl;
	return 0;
}
