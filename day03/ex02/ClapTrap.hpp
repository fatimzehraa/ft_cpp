#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
	
public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &);
	ClapTrap &operator=(const ClapTrap &);
	//setters
	void set_name(std::string name);
	void set_hit(int);
	void set_energy(int);
	void set_attack(int);
	//getters
	std::string get_name();
	int get_hit();
	int get_energy();
	int get_attack();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();

};

#endif // !CLAPTRAP_HPP
