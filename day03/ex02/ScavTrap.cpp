#include "ScavTrap.hpp"
#include <string>

ScavTrap::ScavTrap()
{
	std::cout << "scavtrap default constructor called" << std::endl;
	this->set_hit(100);
	this->set_energy(50);
	this->set_attack(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "scavtrap constructor called" << std::endl;
	this->set_name(name);
	this->set_hit(100);
	this->set_energy(50);
	this->set_attack(20);
}

ScavTrap::ScavTrap(const ScavTrap &old_obj) : ClapTrap(old_obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->set_name(old_obj.name);
	this->set_hit(old_obj.hit_points);
	this->set_energy(old_obj.energy_points);
	this->set_attack(old_obj.attack_damage);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &old_obj)
{
	std::cout << "ScavTrap copy assygnment operator called" << std::endl;
	this->set_name(old_obj.name);
	this->set_hit(old_obj.hit_points);
	this->set_energy(old_obj.energy_points);
	this->set_attack(old_obj.attack_damage);
	return *this;
}

void ScavTrap::attack(const std::string target)
{
	if (energy_points == 0 || hit_points == 0)
		std::cout << name << " can't attack: no energy/hit points left" << std::endl;
	else{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage" << std::endl;
		//target.hit_points -= attack_damage;
		energy_points--;
	}
}

void ScavTrap::guardgate(){
	std::cout << "ScavTrap " << this->get_name()<< " is now in gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "scavtrap destructor called" << std::endl;
}
