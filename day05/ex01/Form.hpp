#ifndef FORM_HPP
# define FORM_HPP
#include <exception>
#include <iostream>
#include <ostream>
#include <string>
class Bureaucrat;
#include "Bureaucrat.hpp"
class Form
{
private:
	std::string const name;
	bool _signed;
	const int grade_sign;//signed
	const int grade_execute;//executed
	
public:
	class GradeTooHighException : public std::exception{
		public:
			const char * what() const _NOEXCEPT{
				return "grade too high";
			}
	};
	class GradeTooLowException : public std::exception{
		public:
			const char * what() const _NOEXCEPT{
				return "grade too low";
			}
	};
	//Form();
	Form(std::string const name, const int grade, const int _grade);
	Form(Form&);
	Form(const Form &);
	Form&operator=(const Form&);
	//setter
	void beSigned(Bureaucrat &);
	//getters
	std::string const getName() const;
	int getGrade_sign()const;
	int getGrade_execute()const;
	bool getSigne()const;
	~Form();

};

std::ostream &operator << (std::ostream &out, Form const &f);

#endif
