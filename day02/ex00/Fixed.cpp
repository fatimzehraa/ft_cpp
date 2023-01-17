#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::Fixed(const Fixed &old_obj) //noexcept
{
	std::cout << "coppy constructor called" << std::endl;
	//this->fixed_point = old_obj.fixed_point;
	*this = old_obj;
}

//void	Fixed::operator=(Fixed const  &capyAssign) {

Fixed &Fixed::operator=(Fixed const &old_obj)
{
	std::cout << "copy assignment operator called" << std::endl;
	//*this = old_obj;
	this->fixed_point = old_obj.getRawBits();
	return *this ;
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

