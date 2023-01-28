#include "Bureaucrat.hpp"
#include <string>

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const _name, int _grade) : name(_name)//initializer list cuz it's constant
{
	this->setGrade(_grade);
	std::cout << "Bureaucrat overloaded constructor called" << std::endl;
}
//getters
std::string const Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	std::cout << "Bureaucrat assigned called" << std::endl;
	return *this;
}
//++ -- grade
void Bureaucrat::incrementGrade(){this->grade--;}
void Bureaucrat::decrementGrade(){this->grade++;}
//destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}
