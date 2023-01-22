#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
# include"ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string);
	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap &);
	void highFivesGuys();
	~FragTrap();

private:
	
};
#endif // !FRAGTRAP_HPP
