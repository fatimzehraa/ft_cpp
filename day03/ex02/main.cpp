#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	FragTrap bob("bob");
	FragTrap habil = bob;
//	bob.set_attack(50000);
	FragTrap jim("jim");
	bob.attack("jim");
	jim.takeDamage(20);
	jim.attack("bob");
	bob.takeDamage(20);
	bob.attack("jim");
	jim.takeDamage(20);
	return 0;
}
