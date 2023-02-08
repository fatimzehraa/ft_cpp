#include "iostream"
#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <cstring>

bool is_double(char *str) {
	char *end;

	strtod(str, &end);

	return (end[0] == '\0');
}

bool is_float(char *str) {
	char *end;

	strtod(str, &end);

	return (strcmp(end, "f") == 0);
	
}

bool is_int(char *str){
	char *end;
	std::strtol(str, &end, 10);
	return (end[0] == 0);
}

bool is_char(char c){
	return isprint(c) && !std::isdigit(c);
}

bool is_character(char *s)
{
	return is_char(s[0]) && strlen(s) == 1;
}

int main (int argc, char *argv[])
{
	if (argc != 2){
		std::cerr << "bad arguments count" << std::endl;
		return 1;
	}
	else if (!is_float(argv[1]) && !is_double(argv[1]) && !is_int(argv[1]) && !is_character(argv[1])) {
		std::cerr << "bad arguments type" << std::endl;
		return 1;
	}
/*
	if (argc != 2 || !is_char(argv[1][0]) || (is_char(argv[1][0]) && argv[1][1] != 0)) {
		std::cerr << "bad argumets" << std::endl;
	}*/
	else{
		try {
			ScalarConverter::Convert(argv[1]);
			
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
