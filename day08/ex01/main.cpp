#include <exception>
#include <iostream>
#include <vector>
#include "Span.hpp"

int main ()
{
	try {
		std::vector<int> wide(10000, 1);
		Span sp(100007);
		sp.addNumber(8);
		sp.addNumber(2);
		sp.addNumber(14);
		sp.addNumber(33);
		sp.addNumber(4);

		sp.addNumber(5);
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		sp.addRange(wide.begin(), wide.end());
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
