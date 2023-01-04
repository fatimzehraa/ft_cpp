#include "zombie.hpp"
#include <typeinfo>

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "constractor called" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}



Zombie::~Zombie()
{
	std::cout << "destractor called" << std::endl;
}
