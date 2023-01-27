#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	void makeSound() const;
	void setbrain(const Brain &);
	Brain *getbrain();
	~Cat();

private:
	Brain *brain;
};

#endif // !CAT_HPP
