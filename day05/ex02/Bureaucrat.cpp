#include "Bureaucrat.hpp"
#include <exception>
#include <ostream>
#include <string>

Bureaucrat::Bureaucrat() : name("sova"), grade(1)
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

void Bureaucrat::setGrade(int _grade){
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name)
{
	this->setGrade(bureaucrat.getGrade());
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	std::cout << "Bureaucrat assigned called" << std::endl;
	this->setGrade(bureaucrat.getGrade());
	return *this;
}
//++ -- grade
void Bureaucrat::incrementGrade(){this->setGrade(grade--);}
void Bureaucrat::decrementGrade(){this->setGrade(grade++);}
//class Form;
void Bureaucrat::signForm( Form &f){
	try {
		f.beSigned(*this);
		std::cout << this << " signed " << f << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	/*
	if (f.getSigne())
		std::cout << this << " signed " << f << std::endl;
		*/
}

//destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::ostream& operator << (std::ostream &output, Bureaucrat const &b){
	output << b.getName() << ", bureaucrat grade " << b.getGrade();
	return output;
}
