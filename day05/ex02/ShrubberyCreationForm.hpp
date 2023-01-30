#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
class ShrubberyCreationForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm&);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm&operator=(const ShrubberyCreationForm&);
	~ShrubberyCreationForm();
 
protected:
private:

};
#endif
