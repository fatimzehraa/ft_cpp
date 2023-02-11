#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>

template<class oo>
class Array
{
private:
	oo elements[];
	
public:
	Array(){
		std::cout << "enpty Array constructed" << std::endl;
	}
	Array(unsigned int n){
		for (size_t i = 0; i < n; i++) {
			elements[i] = new oo();

		}
	}
	Array(const Array & array){
	
	}
	Array &operator=(const Array &array){

	}
	~Array();

};

Array::Array()
{
}

Array::~Array()
{
}

#endif
