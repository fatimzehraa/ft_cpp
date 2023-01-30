#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <exception>
#include <iostream>
#include <string>
class Form;
#include "AForm.hpp"
class Bureaucrat
{
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
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat&);
	Bureaucrat(const Bureaucrat &);
	Bureaucrat&operator=(const Bureaucrat&);
	//setters
	void setGrade(int);
	//getters
	std::string const getName() const;
	int getGrade() const;
	//++ -- grade
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &f);
	~Bureaucrat();
 
protected:
private:
	std::string const name;
	int grade;

};

std::ostream& operator << (std::ostream &output, Bureaucrat const &);

#endif
