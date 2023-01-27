#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = brain.ideas[i];
	}
	//this->ideas = brain.ideas;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Brain assigned called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = brain.ideas[i];
	}
	return *this;
}

void Brain::set_ideas(std::string ideas[100]){
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = ideas[i];
	}
}

std::string *Brain::get_ideas(){
	return(this->ideas);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
