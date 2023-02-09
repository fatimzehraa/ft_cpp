#include <stdint.h>
#include <iostream>
#include "Data.h"
#include "Serializer.hpp"


int main ()
{
	Data *ptr = new Data();
	Data *tmp = ptr;
	tmp->member1 = 5;
	tmp->member2 = 'a';
	uintptr_t raw = 0;
	raw = Serializer::serialize(tmp);
	std::cout << "raw = " << raw << std::endl;
	std::cout << "ptr = " << tmp << std::endl;
	raw += 4;
	tmp = Serializer::deserialize(raw);
	std::cout << "raw = " << raw << std::endl;
	std::cout << "ptr = " << tmp << std::endl;
	std::cout << "member2 = " << *reinterpret_cast<char*>(tmp) << std::endl;
	delete ptr;
	return 0;
}
