#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat&);
	WrongCat(const WrongCat &);
	WrongCat&operator=(const WrongCat&);
	void makeSound() const;
	~WrongCat();
 
protected:
private:

};
#endif
