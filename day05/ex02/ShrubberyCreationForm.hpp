#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <iostream>
class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm&);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm&operator=(const ShrubberyCreationForm&);
	void execute(Bureaucrat const & executor) const;
	~ShrubberyCreationForm();
 
protected:
private:
	const int grade_sign = 145;
	const int grade_exec = 137;

};
#endif
