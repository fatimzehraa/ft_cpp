#include "zombie.hpp"
#include <typeinfo>

Zombie::Zombie()
{
	std::cout << "constractor called" << std::endl;

}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}



Zombie::~Zombie()
{
	std::cout << "destractor called" << std::endl;
}
