#include <iostream>
#include "zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* newone;
	newone = new Zombie(name);
	return newone;
}
