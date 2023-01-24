#include "Animal.hpp"
#include <string>

Animal::Animal(){
	std::cout << "Animal defeault constructor called" << std::endl;
}

Animal::Animal(std::string type){
	std::cout << "Animal constructor overload called" << std::endl;
	this->type = type;
}

Animal::Animal(Animal const &old_obj)
{
	*this = old_obj;
}

Animal & Animal::operator=(Animal const &old_obj){
	type = old_obj.type;
	return *this;
}

void Animal::setType(std::string new_type){
	type = new_type;
}

std::string Animal::getType() const {
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
