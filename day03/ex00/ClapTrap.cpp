#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(){
	std::cout << "defeault constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "constructor called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj){
	name = old_obj.name;
	hit_points = old_obj.hit_points;
	energy_points = old_obj.energy_points;
	attack_damage = old_obj.attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &old_obj){
	this->name = old_obj.name;
	hit_points = old_obj.hit_points;
	energy_points = old_obj.energy_points;
	attack_damage = old_obj.attack_damage;
	return *this;
}
//setters

void ClapTrap::set_name(std::string name){
	this->name = name;
}
void ClapTrap::set_hit(int hit){
	this->hit_points = hit;
}
void ClapTrap::set_energy(int energy){
	this->energy_points = energy;
}
void ClapTrap::set_attack(int attack){
	this->attack_damage = attack;
}
//getters
std::string ClapTrap::get_name(){
	return this->name;
}
int ClapTrap::get_hit(){
	return this->hit_points;
}
int ClapTrap::get_energy(){
	return this->energy_points;
}
int ClapTrap::get_attack(){
	return this->attack_damage;
}
//if hit points || energy points are equal to 0 nothing can be done !!
void ClapTrap::attack(const std::string &target){
	if (energy_points == 0 || hit_points == 0)
		std::cout << name << " can't attack: no energy/hit points left" << std::endl;
	else{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage" << std::endl;
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
		std::cout << name << " can't be prepared: no energy/hit points left" << std::endl;
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
