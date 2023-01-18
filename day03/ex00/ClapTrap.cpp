#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "defeault constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj){
	name = old_obj.name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &old_obj){
	this->name = old_obj.name;
	return *this;
}
//if hit points || energy points are equal to 0 nothing can be done !!
void ClapTrap::attack(const std::string &target){
	if (energy_points == 0 || hit_points == 0)
		std::cout << "no energy/hit points left" << std::endl;
	else{
		std::cout << "ClapTrap" << name << "attacks" << target << ", causing" << attack_damage << "points of damage" << std::endl;
		//target.hit_points -= attack_damage;
		energy_points--;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (energy_points == 0 || hit_points == 0)
		std::cout << "no energy/hit points left" << std::endl;
	else{
		this->attack_damage += amount;
		std::cout << "ClapTrap " << name << " took " << amount << " points of damage." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (energy_points == 0 || hit_points == 0)
		std::cout << "no energy/hit points left" << std::endl;
	else{
		std::cout << "ClapTrap" << name << " is prepared with " << amount << "hit_points" << std::endl;
		hit_points += amount;
		energy_points--;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "defeault destructor called" << std::endl;
}
