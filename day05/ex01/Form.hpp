#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include <ostream>
#include <string>
class Form
{
public:
	Form();
	Form(std::string const name, const int grade, const int _grade);
	Form(Form&);
	Form(const Form &);
	Form&operator=(const Form&);
	//setter
	void beSigned();
	//getters
	std::string const getName();
	const int getGrade();
	const int get_Grade();
	~Form();
 
protected:
private:
	std::string const name;
	bool _signed = 0;
	const int grade;//signed
	const int _grade;//executed
	

};

std::ostream &operator << (std::ostream out, Form const f);

#endif
