#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	ScavTrap bob("bob");
	ScavTrap habil = bob;
//	bob.set_attack(50000);
	ScavTrap jim("jim");
	bob.attack("jim");
	jim.takeDamage(20);
	jim.attack("bob");
	bob.takeDamage(20);
	bob.attack("jim");
	jim.takeDamage(20);
	return 0;
}
