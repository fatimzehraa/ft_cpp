#include <iostream>
#include "zombie.hpp"


void randomChump(std::string name)
{
	Zombie naah(name);
	naah.announce();
}
