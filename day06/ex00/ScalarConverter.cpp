#include "ScalarConverter.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

void ScalarConverter::ConvertToChar(std::string c){
	int cc = std::stoi(c);
	if (isprint(cc)) {
		std::cout << static_cast<char>(cc) << std::endl;
	}
	else
		std::cout << "undesplayable character" << std::endl;
}

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarconverter)
{
	(void)scalarconverter;
	std::cout << "ScalarConverter copy constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalarconverter)
{
	(void)scalarconverter;
	std::cout << "ScalarConverter assigned called" << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}
