#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int fixed_point;
	static const int fractional_bits = 8;
	
public:
//constructors
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed &);
//coppy assignmenent operator
	Fixed &operator=(const Fixed &);
//member functions
	float toFloat() const;
	int toInt() const;
	void setRawBits( int const raw );
	int getRawBits( void ) const;
//arithmetic operators
	float operator * (Fixed const &);
    float operator+(Fixed const &);
    float operator-(Fixed const &);
    float operator/(Fixed const &);
//comparison operators
    int operator>(Fixed const &);
    int operator<(Fixed const &);
    int operator>=(Fixed const &);
    int operator<=(Fixed const &);
    int operator==(Fixed const &);
    int operator!=(Fixed const &);
//increament decreament operators
    Fixed &operator++();
    Fixed operator++(int);
    Fixed operator--(int);
    Fixed &operator--();
//min max
	Fixed &min(Fixed &obj1, Fixed &obj2);
	static Fixed &min(Fixed const &obj1, Fixed const &obj2);
	Fixed &max(Fixed &obj1, Fixed &obj2);
	static Fixed &max(Fixed const &obj1, Fixed const &obj2);

//destructor
	~Fixed();

};

std::ostream &operator << (std::ostream &out, Fixed const &f);

#endif // !FIXED_HPP
