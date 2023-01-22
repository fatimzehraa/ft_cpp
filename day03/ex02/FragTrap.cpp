#include "FragTrap.hpp"
#include <string>

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->set_hit(100);
	this->set_energy(100);
	this->set_attack(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->set_name(name);
	this->set_hit(100);
	this->set_energy(100);
	this->set_attack(30);
}

FragTrap::FragTrap(const FragTrap &old_obj) : ClapTrap(old_obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->set_name(old_obj.name);
	this->set_hit(old_obj.hit_points);
	this->set_energy(old_obj.energy_points);
	this->set_attack(old_obj.attack_damage);
}

FragTrap &FragTrap::operator=(const FragTrap &old_obj)
{
	std::cout << "FragTrap copy assygnment operator called" << std::endl;
	this->set_name(old_obj.name);
	this->set_hit(old_obj.hit_points);
	this->set_energy(old_obj.energy_points);
	this->set_attack(old_obj.attack_damage);
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap request a high five guys, yaaay!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
