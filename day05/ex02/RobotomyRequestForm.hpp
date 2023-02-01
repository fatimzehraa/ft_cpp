#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include <iostream>
class RobotomyRequestForm: public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm&);
	RobotomyRequestForm(const RobotomyRequestForm &);
	RobotomyRequestForm&operator=(const RobotomyRequestForm&);
	void execute(Bureaucrat const & executor) const;
	~RobotomyRequestForm();
 
protected:
private:
	const int grade_sign = 72;
	const int grade_exec = 45;

};
#endif
