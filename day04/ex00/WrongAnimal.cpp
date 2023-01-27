#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
	std::cout << "Animal constructor overload called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	*this = wronganimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	type = wronganimal.type;
	return *this;
}

void WrongAnimal::setType(std::string new_type){
	type = new_type;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
