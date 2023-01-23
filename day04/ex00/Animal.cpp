#include "Animal.hpp"
#include <string>

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &old_obj)
{
	*this = old_obj;
}

Animal & Animal::operator=(Animal const &old_obj){
	type = old_obj.type;
	return *this;
}

void Animal::settype(std::string new_type){
	type = new_type;
}

std::string Animal::gettype(){
	return type;
}

void Animal::makeSound() const
{
	std::cout << "animal sound" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
