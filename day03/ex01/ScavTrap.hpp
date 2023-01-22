#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include<iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	
public:
	ScavTrap();
	ScavTrap(std::string);
	ScavTrap(const ScavTrap &);
	ScavTrap &operator=(const ScavTrap &);
	void attack(const std::string target);
	void guardgate();
	~ScavTrap();

};

#endif // !SCAVTRAP_HPP
