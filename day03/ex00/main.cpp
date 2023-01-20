#include <iostream>
#include "ClapTrap.hpp"

int main ()
{
	ClapTrap bob("bob");
	bob.set_attack(5);
	ClapTrap jim("jim");
	bob.attack("jim");
	jim.takeDamage(5);
	return 0;
}
