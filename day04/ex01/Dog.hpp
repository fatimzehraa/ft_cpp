#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &);
	Dog &operator=(const Dog &);
	void makeSound() const;
	void setbrain(const Brain &);
	Brain *getbrain();
	~Dog();

private:
	Brain *brain;
};

#endif // !DOG_HPP
