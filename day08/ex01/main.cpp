#include <exception>
#include <iostream>
#include "Span.hpp"

int main ()
{
	try {
		Span sp(5);
		sp.addNumber(5, 7, 1, 2,3 ,6);
//		for(unsigned long i = 0; i < sp.vec.size(); i++)
//			std::cout << sp.vec[i] << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
