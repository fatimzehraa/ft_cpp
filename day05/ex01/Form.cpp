#include "Form.hpp"
#include <ostream>

Form::Form() : grade(1), _grade(1)
{
	this->_signed = false;
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(std::string const name, const int grade, const int _grade): name(name), grade(grade), _grade(_grade)
{
	this->_signed = false;
	std::cout << "Form overloaded constructor called" << std::endl;
}

Form::Form(const Form &form): name(form.name), grade(form.grade), _grade(form._grade)
{
	*this = form;
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &form)
{
	std::cout << "Form assigned called" << std::endl;
	this->_signed = form._signed;//not sure cuz it says at construction it is't _signed
	return *this;
}
//setter
void Form::beSigned(){this->_signed = true;}
//getters
std::string const Form::getName()const{return this->name;}
int Form::getGrade()const{return this->grade;}
int Form::get_Grade()const{return this->_grade;}
bool Form::getSigne()const{return _signed;}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::ostream &operator << (std::ostream &out, Form const &f){
	out << f.getName() << " signed status: " << f.getSigne();
	return out;
}
