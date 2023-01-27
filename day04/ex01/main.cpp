#include "Animal.hpp" 
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog sova;
	std::cout << sova.getbrain() << std::endl;
	Dog obie(sova);
	std::cout << "obie" << obie.getbrain() << std::endl;
	std::cout << "obie" << obie.getType() << std::endl;
	/*
	Animal *pack[2];
	for (int i = 0; i < 2; i++) {
		if (i < 1)
			pack[i] = new Dog();
		else
			pack[i] = new Cat();
	}
	for (int i = 0; i < 2; i++) {
		delete pack[i];
	}*/
	return 0;
}
