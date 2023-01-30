#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try {
		Form forumuu("forumuu", -4,45);
		Bureaucrat bureaucrat1("bureaucrat1",4);
		std::cout << bureaucrat1 << std::endl;
		Bureaucrat bureaucrat2("bureaucrat2",400);
		std::cout << bureaucrat2 << std::endl;
		forumuu.beSigned(bureaucrat1);
		bureaucrat1.signForm(forumuu);
	}
	catch (std::exception &e1) {
		std::cout << e1.what() << std::endl;
	}
	return 0;
}
