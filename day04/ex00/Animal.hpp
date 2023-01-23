#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &);
	Animal &operator=(const Animal &);
	void settype(std::string);
	std::string gettype();
	virtual void makeSound() const ;
	~Animal();

};

#endif // !ANIMAL_HPP
