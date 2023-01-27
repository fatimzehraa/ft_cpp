#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <string>
class Brain
{
public:
	Brain();
	Brain(Brain&);
	Brain(const Brain &);
	Brain&operator=(const Brain&);
	void set_ideas(std::string ideas[100]);
	std::string *get_ideas();
	~Brain();
 
protected:
private:
	std::string ideas[100];
};
#endif
