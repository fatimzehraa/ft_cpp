#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string newType);
	const std::string &getType();
	void setType(std::string newType);
	~Weapon();
};

#endif // !WEAPON_HPP
