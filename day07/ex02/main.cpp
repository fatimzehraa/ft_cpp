#include "array.hpp"
#include <iostream>
#include <string>

int main ()
{
	try {
	Array<std::string> table(7);
	table[4] = "hala";
	std::cout << table.size() << std::endl;
	std::cout << table[-4] << std::endl;
	}
	catch (const std::exception&e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
