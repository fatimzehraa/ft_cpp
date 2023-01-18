#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <math.h>
#include <ostream>

Fixed::Fixed()
{
//	std::cout << "defeault constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::Fixed(const int x)
{
//	std::cout << "int constructor called" << std::endl;
	fixed_point = x << 8; // *2(8) 
}

Fixed::Fixed(const float x)
{
//	std::cout << "float constructor called" << std::endl;
	fixed_point = roundf(x * 256); // *2(8)
}

Fixed::Fixed(const Fixed &old_obj)
{
//	std::cout << "coppy constructor called" << std::endl;
	//this->fixed_point = old_obj.fixed_point;
	*this = old_obj;
}

Fixed &Fixed::operator=(Fixed const &old_obj)
{
//	std::cout << "copy assignment operator called" << std::endl;
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

float Fixed::operator* (Fixed const &obj1)
{
	float new_float;
	new_float = this->toFloat() * obj1.toFloat();
	return new_float;
}

float Fixed::operator+(Fixed const &obj1)
{
	float new_float;
	new_float = this->toFloat() + obj1.toFloat();
	return new_float;
}

float Fixed::operator-(Fixed const &obj1)
{
	float new_float;
	new_float = this->toFloat() - obj1.toFloat();
	return new_float;
}

float Fixed::operator/(Fixed const &obj1)
{
	if (obj1.toFloat() != 0) {
		float new_float;
		new_float = this->toFloat() / obj1.toFloat();
		return new_float;
	}
	else {
		std::cout << "you can't devide by zero" << std::endl;
        return 0.0;
    }
}

//comparison operators

int Fixed::operator>(Fixed const &obj1)
{
	return(this->fixed_point > obj1.fixed_point);
}

int Fixed::operator<(Fixed const &obj1)
{
	return(this->fixed_point < obj1.fixed_point);
}

int Fixed::operator>=(Fixed const &obj1)
{
	return(this->fixed_point >= obj1.fixed_point);
}

int Fixed::operator<=(Fixed const &obj1)
{
	return(this->fixed_point <= obj1.fixed_point);
}

int Fixed::operator==(Fixed const &obj1)
{
	return(this->fixed_point == obj1.fixed_point);
}

int Fixed::operator!=(Fixed const &obj1)
{
	return(this->fixed_point != obj1.fixed_point);
}

//increment and decrement operators

Fixed &Fixed::operator++()
{
	++fixed_point;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed new_obj;
	new_obj.fixed_point = fixed_point++;
	return new_obj;
}

Fixed &Fixed::operator--()
{
	--fixed_point;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed new_obj;
	new_obj.fixed_point = fixed_point--;
	return new_obj;
}

 /* static member functions min/max */
  
Fixed &Fixed:: min(Fixed &obj1, Fixed & obj2) {
    if (obj1.fixed_point < obj2.fixed_point)
        return (obj1);
    else
        return (obj2);
}

 Fixed &Fixed:: min(Fixed const &obj1, Fixed const & obj2 ) {
    if (obj1.fixed_point < obj2.fixed_point)
        return ((Fixed &)obj1);
    else
        return ((Fixed &)obj2);
}

Fixed &Fixed:: max(Fixed &obj1, Fixed & obj2) {
    if (obj1.fixed_point > obj2.fixed_point)
        return (obj1);
    else
        return (obj2);
}

Fixed &Fixed:: max(Fixed const &obj1, Fixed const & obj2 ) {
    if (obj1.fixed_point > obj2.fixed_point)
        return ((Fixed &)obj1);
    else
        return ((Fixed &)obj2);
}
//destructor
Fixed::~Fixed()
{
//	std::cout << "destructor called" << std::endl;
}
//<< operator overload
std::ostream &operator << (std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return out;
}
