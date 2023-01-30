#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <ostream>

void check_grades(int grade_sign, int grade_execute){
	if (grade_sign < 1 || grade_execute < 1)
		throw AForm::GradeTooHighException();
	else if (grade_sign > 150 || grade_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(std::string const name, const int grade, const int _grade): name(name), grade_sign(grade), grade_execute(_grade)
{
	check_grades(grade, _grade);
	this->_signed = false;
	std::cout << "AForm overloaded constructor called" << std::endl;
}

AForm::AForm(const AForm &form): name(form.name), grade_sign(form.grade_sign), grade_execute(form.grade_execute)
{
	check_grades(grade_sign, grade_execute);
	*this = form;
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &form)
{
	std::cout << "AForm assigned called" << std::endl;
	this->_signed = form._signed;//not sure cuz it says at construction it is't _signed
	return *this;
}
//setter
void AForm::beSigned(Bureaucrat &buro){
	if (buro.getGrade() <= this->grade_sign)//idk whitch grade 
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}
//getters
std::string const AForm::getName()const{return this->name;}
int AForm::getGrade_sign()const{return this->grade_sign;}
int AForm::getGrade_execute()const{return this->grade_execute;}
bool AForm::getSigne()const{return _signed;}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

std::ostream &operator << (std::ostream &out, AForm const &f){
	out << f.getName() << " signed status: " << f.getSigne();
	return out;
}
