#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &old_obj) : Animal(old_obj){}

Dog &Dog::operator=(Dog const &old_obj){
	Animal::operator=(old_obj);
	return *this;
}

void Dog::makeSound() const{
	std::cout << this->getType() << ": bark" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
