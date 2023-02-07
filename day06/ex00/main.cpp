#include "iostream"
#include "ScalarConverter.hpp"

int main (int argc, char *argv[])
{
	if (argc != 2) {
		std::cerr << "bad argumets" << std::endl;
	}
	else{
		try {
			ScalarConverter::ConvertToChar(argv[1]);
			ScalarConverter::ConvertToInt(argv[1]);
			ScalarConverter::ConvertToFloat(argv[1]);
			
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
