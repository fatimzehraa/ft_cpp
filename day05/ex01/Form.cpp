#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <ostream>

void check_grades(int grade_sign, int grade_execute){
	if (grade_sign < 1 || grade_execute < 1)
		throw Form::GradeTooHighException();
	else if (grade_sign > 150 || grade_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(std::string const name, const int grade, const int _grade): name(name), grade_sign(grade), grade_execute(_grade)
{
	check_grades(grade, _grade);
	this->_signed = false;
	std::cout << "Form overloaded constructor called" << std::endl;
}

Form::Form(const Form &form): name(form.name), grade_sign(form.grade_sign), grade_execute(form.grade_execute)
{
	check_grades(grade_sign, grade_execute);
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
void Form::beSigned(Bureaucrat &buro){
	if (buro.getGrade() <= this->grade_sign)//idk whitch grade 
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}
//getters
std::string const Form::getName()const{return this->name;}
int Form::getGrade_sign()const{return this->grade_sign;}
int Form::getGrade_execute()const{return this->grade_execute;}
bool Form::getSigne()const{return _signed;}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::ostream &operator << (std::ostream &out, Form const &f){
	out << f.getName() << " signed status: " << f.getSigne();
	return out;
}
