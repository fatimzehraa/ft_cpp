#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>
#include <cstring>

void ScalarConverter::Convert(std::string input){
	if (input.find('n') != std::string::npos && input.length() > 1) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << std::endl;
		std::cout << "double: " << input << std::endl;
	}
	else{
		ConvertToChar(input);
		ConvertToInt(input);
		ConvertToFloat(input);
		ConvertToDouble(input);
	}
}
void ScalarConverter::ConvertToChar(std::string c){
	if (is_char(c[0]) && c[1] == '\0')
			std::cout << "char: '" << c[0] << "'" << std::endl;	
	else {
		int a = std::atoi(c.c_str());
		if (isprint(a))
			std::cout << "char: '" << static_cast<char>(std::atoi(c.c_str())) << "'" << std::endl;	
		else
			std::cout << "char: undesplayable character" << std::endl;
	}
}
void ScalarConverter::ConvertToInt(std::string str){
	if (is_char(str[0]) && !str[1]) {
		int a = str[0];
		std::cout << "int: " << a << std::endl;
	}
	else{
		double d;
		char *end = NULL;
		d = std::strtod(str.c_str(), &end);
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	}
}

void ScalarConverter::ConvertToFloat(std::string str){
	if (is_char(str[0]) && !str[1]) {
		float a = str[0];
		std::cout << "float: " << a << ".0f" << std::endl;
	}
	else{
		double d;
		char *end = NULL;
		d = std::strtod(str.c_str(), &end);
		if (d - (int)d == 0)
			std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	//	std::cout << "end = " << end << std::endl;
	}

}
void ScalarConverter::ConvertToDouble(std::string str){
	if (is_char(str[0]) && !str[1]) {
		float a = str[0];
		std::cout << "double: " << a << ".0" << std::endl;
	}
	else{
		double d;
		char *end = NULL;
		d = std::strtod(str.c_str(), &end);
		if(d - (int)d == 0)
			std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(d) << std::endl;
	//	std::cout << "end = " << end << std::endl;
	}

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
