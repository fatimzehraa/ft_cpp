#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>
#include <iostream>
class Span
{
private:
	unsigned int N;
public:
	std::vector<int> vec;
	Span(unsigned int N);
	Span(Span&);
	Span(const Span &);
	Span&operator=(const Span&);
	void addNumber(unsigned int N,...);//variadic function to handel so many arguments UwU
	int shortestSpan();
	int longestSpan();
	~Span();
 
protected:

};
#endif
