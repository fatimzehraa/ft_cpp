#ifndef SPAN_HPP
# define SPAN_HPP
#include <exception>
#include <vector>
#include <iostream>
class Span
{
private:
	unsigned int capacity;
	unsigned int size;
	std::vector<int> vec;
public:
	class cannot_calculate_exception : public std::exception {
		const char * what() const throw(){
			return "cannot_calculate_exception";
		}
	};
	Span(unsigned int N);
	Span(Span&);
	Span(const Span &);
	Span&operator=(const Span&);
	void addNumber(int n);//variadic function to handel so many arguments UwU
	int shortestSpan();
	int longestSpan();
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	~Span();
 
protected:

};
#endif
