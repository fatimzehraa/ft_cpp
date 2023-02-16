#include "Span.hpp"
#include <algorithm>
#include <cstdarg>
#include <stdexcept>
#include <numeric>
#include <vector>

Span::Span(unsigned int N)
{
	this->capacity = N;
	this->size = 0;
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span &span)
{
	*this = span;
	std::cout << "Span copy constructor called" << std::endl;
}

Span &Span::operator=(const Span &span)
{
	this->capacity = span.capacity;
	this->size = span.size;
	this->vec = span.vec;
	std::cout << "Span assigned called" << std::endl;
	return *this;
}

void Span::addNumber(int n){
	if (capacity - size == 0)
		throw std::out_of_range("out of range");
	vec.push_back(n);
	size++;
}

int Span::longestSpan(){
	if (this->size <= 1)
		throw cannot_calculate_exception();
	int bigger = *std::max_element(vec.begin(), vec.end());
	int smaller = *std::min_element(vec.begin(), vec.end());
	return bigger - smaller;
}

int diff(int x, int y){return abs(x - y);}

int Span::shortestSpan(){
	if (this->size <= 1)
		throw cannot_calculate_exception();
	std::vector<int> tmp(vec);
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin(), diff);
	return *std::min_element(tmp.begin() + 1, tmp.end());
} // std::adjacent_difference 

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	while (begin != end) {
		addNumber(*begin);
		begin++;
	}
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}
