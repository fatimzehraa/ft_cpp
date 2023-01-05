#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	public:
		std::string name;
		Weapon weapon;
		HumanB(std::string name);
		void setWeapon(Weapon weapon);
		void attack();
		~HumanB();
};

#endif // !DEBUG
