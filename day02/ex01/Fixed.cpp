#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <math.h>
#include <ostream>

Fixed::Fixed()
{
	std::cout << "defeault constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::Fixed(const int x)
{
	std::cout << "int constructor called" << std::endl;
	fixed_point = x << 8; // *2(8) 
}

Fixed::Fixed(const float x)
{
	std::cout << "float constructor called" << std::endl;
	fixed_point = roundf(x * 256); // *2(8)
}

Fixed::Fixed(const Fixed &old_obj)
{
	std::cout << "coppy constructor called" << std::endl;
	//this->fixed_point = old_obj.fixed_point;
	*this = old_obj;
}

Fixed &Fixed::operator=(Fixed const &old_obj)
{
	std::cout << "copy assignment operator called" << std::endl;
	//*this = old_obj;
	this->fixed_point = old_obj.getRawBits();
	return *this ;
}

//member functions

float Fixed::toFloat() const
{
	//converts the fixed-point value to a floating-point value
	float f_num;
	f_num = (float)this->fixed_point / 256;
	return f_num;
}

int Fixed::toInt() const
{
	int i_num = 0;
	//converts the fixed point value to int value
	i_num = (int)this->fixed_point / 256;
	return i_num;
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return fixed_point;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

std::ostream &operator << (std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return out;
}
