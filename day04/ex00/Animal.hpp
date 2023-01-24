#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string);
	Animal(const Animal &);
	Animal &operator=(const Animal &);
	void setType(std::string);
	std::string getType() const;
	virtual void makeSound() const ;
	virtual ~Animal();

};

#endif // !ANIMAL_HPP
