#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "cat";
}

Cat::Cat(Cat const &old_obj) : Animal(old_obj) {}

Cat& Cat::operator=(Cat const &old_obj){
	Animal::operator=(old_obj);
	return *this;
}

void Cat::makeSound() const{
	std::cout << "meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
