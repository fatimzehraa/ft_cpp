#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
	std::cout << "Weapon constructor called" << std::endl;
	this->type = newType;
}

const std::string &Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called" << std::endl;
}
