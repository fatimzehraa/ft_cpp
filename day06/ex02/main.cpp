#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <exception>

Base* generate(){
    int rand = ((unsigned long) &rand % 3);
    
    switch (rand)
    {
           case 0:
                std::cout << "generating type A...\n";
                return (new A);
            case 1:
                std::cout << "generating type B...\n";
                return (new B);
            case 2:
                std::cout << "generating type C...\n";
                return (new C);
    }
    return (0);
}

void identify(Base *ptr){
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *>(ptr);
	if (a != 0){
		std::cout << " casted to A" << std::endl;
		return ;
	}
	b = dynamic_cast<B *>(ptr);
	if (b != 0){
		std::cout << "casted to B" << std::endl;
		return ;
	}
	c = dynamic_cast<C *>(ptr);
	if (c != 0){
		std::cout << "casted to C" << std::endl;
		return ;
	}
}

void identify(Base &ptr){
	A a;
	B b;
	C c;

	try {
		a = dynamic_cast<A&>(ptr);
		std::cout << " casted to A" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "A: " << e.what() << std::endl;
	}
	try {
		b = dynamic_cast<B&>(ptr);
		std::cout << " casted to B" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "B: " << e.what() << std::endl;
	}
	try {
		c = dynamic_cast<C&>(ptr);
		std::cout << " casted to C" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "C: " << e.what() << std::endl;
	}
}

int main(){
	Base *ptr;
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return 0;
}
