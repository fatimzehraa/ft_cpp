#include "iostream"
#include "ScalarConverter.hpp"

int main (int argc, char *argv[])
{
	if (argc != 2) {
		std::cerr << "bad argumets" << std::endl;
	}
	else{
		ScalarConverter::ConvertToChar(argv[1]);
	}
	return 0;
}
