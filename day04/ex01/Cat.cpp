#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = NULL;
}

Cat::Cat(Cat const &old_obj) : Animal(old_obj) {
	if (this->brain)
		delete this->brain;
	this->brain = new Brain;
}

Cat& Cat::operator=(Cat const &old_obj){
	Animal::operator=(old_obj);
	if (this != &old_obj)
		this->setbrain(*old_obj.brain);
	return *this;
}

void Cat::makeSound() const{
	std::cout << this->getType() << ": meow" << std::endl;
}

void Cat::setbrain(const Brain &brain){
	Brain* tmp = new Brain(brain);
	if (this->brain)
		delete this->brain;
	this->brain = tmp;
}

Brain* Cat::getbrain(){
	return this->brain;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}
