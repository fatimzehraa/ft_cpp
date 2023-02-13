#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <exception>
#include <iostream>
#include <new>
#include <stdexcept>

template<class T>
class Array
{
private:
	T *elements;
	int n;
	
public:
	Array(){
		this->elements = NULL;
		std::cout << "empty Array constructed" << std::endl;
	}
	Array(unsigned int n){
		elements = new T[n];
		this->n = n;
		std::cout << "full array constructed" << std::endl;
	}
	Array(const Array & array){
		this = array;
		std::cout << "copy constructed array" << std::endl;
	}
	Array &operator=(const Array &array){
		if (this != &array){
			this->n = array.n;
			for (size_t i = 0; i < n; i++) {
				this->elements[i] = array.elements[i];
			}
		}
		std::cout << "array has been assigned" << std::endl;
	}
	int size() const {
		return n;
	}
	T &operator [](int _n){
		if (_n < 0 || _n > this->n)
			throw std::out_of_range("out of range index");
		return this->elements[_n];
	}
	const T &operator [](int _n) const {
		if (_n < 0 || _n > this->n)
			throw std::out_of_range("out of range index");
		return this->elements[_n];
	}
	~Array(){
		delete [] elements;
		std::cout << "array destructed" << std::endl;
	}

};

#endif
