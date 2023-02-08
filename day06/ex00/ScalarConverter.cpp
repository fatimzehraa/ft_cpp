#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>

int is_char(char c){
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	return 0;
}

int is_num(std::string str){
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if(i == len -1){
			if (!std::isdigit(str[i]) && str[i] != 'f')
				return 0;
		}
		else if (!std::isdigit(str[i]))
			return 0;
	}
	return 1;
}
void ScalarConverter::Convert(std::string input){
	if (input == "nan" || input == "nanf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (input == "+inf" || input == "+inff") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (input == "-inf" || input == "-inff") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else{
		ConvertToChar(input);
		ConvertToInt(input);
		ConvertToFloat(input);
	//	ConvertToDouble(input);
	}
}
void ScalarConverter::ConvertToChar(std::string c){
	if (is_char(c[0])){
		if (!c[1]) {
			int a = c[0];
			std::cout << "char: '" << static_cast<char>(a) << "'" << std::endl;	
		}
		else
			std::cerr << "bad argument" << std::endl;
		//	throw ScalarConverter::NotChar();
	}
	else if (is_num(c)){
		int a = std::atoi(c.c_str());
		if (a > 31 && a < 128)
			std::cout << "char: '" << static_cast<char>(std::atoi(c.c_str())) << "'" << std::endl;	
		else
			std::cout << "char: undesplayable character" << std::endl;
	}
}
#include <cstring>
void ScalarConverter::ConvertToInt(std::string str){
	if (is_char(str[0]) && !str[1]) {
		int a = str[0];
		std::cout << "int: " << a << std::endl;
	}
	else{
		double d;
		char *end = NULL;
		d = std::strtod(str.c_str(), &end);
		/*
		if (strcmp(end, "f") != 0) {
			std::cerr << "bad argument" << std::endl;
			return ;
		}*/
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "end = " << end << std::endl;
	}
}

void ScalarConverter::ConvertToFloat(std::string str){
	if (is_num(str)) {
		std::cout << "float: " << str << ".00f" << std::endl;
	}
	else if (is_char(str[0]) && !str[1]) {
		float a = str[0];
		std::cout << "float: " << a << ".00f" << std::endl;
	}
	else{
		double d;
		char *end = NULL;
		d = std::strtod(str.c_str(), &end);
		std::cout << "float: " << static_cast<float>(d) << ".00f" << std::endl;
		std::cout << "end = " << end << std::endl;
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
