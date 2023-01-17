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
//destructor
	~Fixed();

};

std::ostream &operator << (std::ostream &out, Fixed const &f);

#endif // !FIXED_HPP
