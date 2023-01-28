#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try {
		Bureaucrat bureaucrat1("bureaucrat1",4);
		std::cout << bureaucrat1 << std::endl;
		Bureaucrat bureaucrat2("bureaucrat2",400);
		std::cout << bureaucrat2 << std::endl;
	}
	catch (std::exception &e1) {
		std::cout << e1.what() << std::endl;
	}
	Form f1;
	std::cout << f1 << std::endl;
	return 0;
}
