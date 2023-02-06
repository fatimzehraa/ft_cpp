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
		if(i == len){
			if (!std::isdigit(str[i]) && str[i] != 'f')
				return 0;
		}
		else if (!std::isdigit(str[i]))
			return 0;
	}
	return 1;
}

/*
int chartod(std::string c){
	int a;
	
	if (is_char(c[0]) && c[1] == 0) {
		a = c[0];
	}
	return a;
}*/
void ScalarConverter::ConvertToChar(std::string c){
	if (is_char(c[0])){
		if (!c[1]) {
			int a = c[0];
			std::cout << "char representation: " << static_cast<char>(a) << std::endl;	
		}
		else
			std::cout << "message" << std::endl;
		//	throw ScalarConverter::NotChar();
	}
	else if (is_num(c)) {
			std::cout << "char representation: " << static_cast<char>(std::atoi(c.c_str())) << std::endl;	
		
	}
	else
		std::cout << "char representation: undesplayable character" << std::endl;
}

void ScalarConverter::ConvertToInt(std::string str){
	if (is_char(str[0]) && !str[1]) {
		int a = str[0];
		std::cout << "int representation: " << a << std::endl;
	}
	else{
		double d;
		char *end = NULL;
		d = std::strtod(str.c_str(), &end);
		std::cout << "int representation: " << static_cast<int>(d) << std::endl;
		std::cout << "end = " << end << std::endl;
	}
}

void ScalarConverter::ConvertToFloat(std::string str){}
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
