#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(Dog const &old_obj) : Animal(old_obj){
	//if (this->brain)
	//	delete this->brain;
	this->brain = new Brain;
}

Dog &Dog::operator=(Dog const &old_obj){
	Animal::operator=(old_obj);
	if (this != &old_obj)
		this->setbrain(*old_obj.brain);
	return *this;
}

void Dog::makeSound() const{
	std::cout << this->getType() << ": bark" << std::endl;
}

void Dog::setbrain(const Brain &brain){
	Brain *tmp = new Brain(brain);
	if (this->brain)
		delete this->brain;
	this->brain = tmp;
}

Brain* Dog::getbrain(){
	return this->brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}
