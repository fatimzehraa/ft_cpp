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
	//Form();
	AForm(std::string const name, const int grade, const int _grade);
	AForm(AForm&);
	AForm(const AForm &);
	AForm&operator=(const AForm&);
	//setter
	void beSigned(Bureaucrat &);
	//getters
	std::string const getName() const;
	int getGrade_sign()const;
	int getGrade_execute()const;
	bool getSigne()const;
	~AForm();

};

std::ostream &operator << (std::ostream &out, AForm const &f);

#endif
