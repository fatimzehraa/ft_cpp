#include "Serializer.hpp"
#include "Data.h"

uintptr_t Serializer::serialize(Data *ptr){
	uintptr_t uint = reinterpret_cast<uintptr_t>(ptr);
	return uint;
}

Data *Serializer::deserialize(uintptr_t raw){
	Data *ptr = reinterpret_cast<Data *>(raw);
	return ptr;
}

Serializer::Serializer()
{
	std::cout << "Serializer constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &serializer)
{
	(void)serializer;
	std::cout << "Serializer copy constructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &serializer)
{
	(void)serializer;
	std::cout << "Serializer assigned called" << std::endl;
	return *this;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}
