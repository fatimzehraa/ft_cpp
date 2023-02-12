#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>

template<class oo>
class Array
{
private:
	oo *elements;
	
public:
	Array(){
		std::cout << "enpty Array constructed" << std::endl;
	}
	Array(unsigned int n){
		elements = new oo();
		std::cout << "full array constructed" << std::endl;
	}
	Array(const Array & array){
		this = array;
		std::cout << "copy constructed array" << std::endl;
	}
	Array &operator=(const Array &array){
		if (this != &array)
			this->elements = array.elements;
	}
	~Array();

};

/*
Array::Array()
{
}

Array::~Array()
{
}*/

#endif
