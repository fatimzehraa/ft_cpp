#include "Form.hpp"

Form::Form() : grade(5), _grade(4)
{
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(std::string const name, const int grade, const int _grade): name(name), grade(grade), _grade(_grade)
{
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
std::string const Form::getName(){return this->name;}
const int Form::getGrade(){return this->grade;}
const int Form::get_Grade(){return this->_grade;}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}
