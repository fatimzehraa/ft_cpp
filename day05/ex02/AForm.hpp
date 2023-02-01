#ifndef AFORM_HPP
# define AFORM_HPP
#include <exception>
#include <iostream>
#include <ostream>
#include <string>
class Bureaucrat;
#include "Bureaucrat.hpp"
class AForm
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
	class FormNotSignedException : public std::exception{
		public:
			const char * what() const _NOEXCEPT{
				return "Form not signed";
			}
	};
	//Form();
	AForm(std::string const name, const int grade, const int _grade);
	AForm(AForm&);
	AForm(const AForm &);
	AForm&operator=(const AForm&);
	//getters
	std::string const getName() const;
	int getGrade_sign()const;
	int getGrade_execute()const;
	bool getSigne()const;
	//setter
	void beSigned(Bureaucrat &);
	//execuute
	virtual void check_req(Bureaucrat const & executer)const ;
	virtual void execute(Bureaucrat const & executor) const = 0;
	~AForm();

};

std::ostream &operator << (std::ostream &out, AForm const &f);

#endif
