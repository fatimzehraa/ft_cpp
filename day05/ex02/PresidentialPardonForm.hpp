#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include <iostream>
class PresidentialPardonForm: public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm&);
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm&operator=(const PresidentialPardonForm&);
	void execute(Bureaucrat const & executor) const;
	~PresidentialPardonForm();
 
protected:
private:
	const int grade_sign = 25;
	const int grade_exec = 5;

};
#endif
