#include "zombie.hpp"

int main()
{
	Zombie *z = newZombie("bar");
	z->announce();
	randomChump("naah");
	delete z;
	return (0);
}
