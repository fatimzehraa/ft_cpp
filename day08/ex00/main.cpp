#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main ()
{
	try {
		std::vector<int> vec;
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		std::cout << easyfind(vec, 42)<< std::endl;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
