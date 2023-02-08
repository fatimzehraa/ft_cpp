#include "iostream"
#include "ScalarConverter.hpp"

int main (int argc, char *argv[])
{
	if (argc != 2 || ((is_char(argv[1][0]) && argv[1][1] != 0) || !is_num(argv[1]))) {
		std::cerr << "bad argumets" << std::endl;
	}
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
