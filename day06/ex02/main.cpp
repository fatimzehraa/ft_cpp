#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <exception>

Base* generate(){
	A *a = new A;
	Base* ptr = dynamic_cast<Base *>(a);
	return ptr;
}

void identify(Base *ptr){
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *>(ptr);
	if (a != 0){
		std::cout << "A" << std::endl;
		return ;
	}
	b = dynamic_cast<B *>(ptr);
	if (b != 0){
		std::cout << "b" << std::endl;
		return ;
	}
	c = dynamic_cast<C *>(ptr);
	if (c != 0){
		std::cout << "C" << std::endl;
		return ;
	}/*
	else if (b != 0)
		std::cout << "B" << std::endl;
	else if (c != 0)
		std::cout << "C" << std::endl;
	else
		std::cout << "message" << std::endl;
	std::cout << "*ptr: " << ptr << std::endl;
	delete a;
	delete b;
	delete c;
	*/
}

void identify(Base &ptr){
	A &a = dynamic_cast<A&>(ptr);
	B &b = dynamic_cast<B&>(ptr);
	C &c = dynamic_cast<C&>(ptr);
	(void)a,(void)b,(void)c;
	//std::cout << "&ptr: "<< &ptr << std::endl;
}

int main(){
	Base *ptr;
	ptr = generate();
	identify(ptr);
	try {
		identify(*ptr);
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete ptr;
	return 0;
}
