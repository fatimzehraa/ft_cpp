#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>
#include <string>
class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &);
	WrongAnimal&operator=(const WrongAnimal&);
	void setType(std::string);
	std::string getType() const;
	void makeSound() const ;
	~WrongAnimal();
 
protected:
	std::string type;
private:

};
#endif
