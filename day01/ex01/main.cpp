#include "zombie.hpp"

int main ()
{
	Zombie *z = zombieHorde(5, "foo");
	for (int i = 0; i < 5; i++) {
		z[i].announce();
	}
	delete[] z;
	return 0;
}
