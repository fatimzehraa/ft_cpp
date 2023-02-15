#include "Span.hpp"
#include <algorithm>
#include <cstdarg>
#include <stdexcept>

Span::Span(unsigned int N)
{
	this->N = N;
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span &span)
{
	*this = span;
	std::cout << "Span copy constructor called" << std::endl;
}

Span &Span::operator=(const Span &span)
{
	this->N = span.N;
	this->vec = span.vec;
	std::cout << "Span assigned called" << std::endl;
	return *this;
}

void Span::addNumber(unsigned int N,...){
	if (N > this->N)
		throw std::out_of_range("out of range");
	va_list args;
	va_start(args, N);
	unsigned int i = 0;
	while (i < N) {
		vec.push_back(va_arg(args, int));
		i++;
	}
	va_end(args);
}

int Span::longestSpan(){
	// still needs to throw exception when N <= 1
	int bigger = *std::max_element(vec.begin(), vec.end());
	int smaller = *std::min_element(vec.begin(), vec.end());
	return bigger - smaller;
}

int Span::shortestSpan(){} // std::adjacent_difference 

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}
