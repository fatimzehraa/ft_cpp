#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <string>
class Bureaucrat
{
public:
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
	~Bureaucrat();
 
protected:
private:
	std::string const name;
	int grade;

};

std::ostream& operator << (std::ostream &output, Bureaucrat &);

#endif
