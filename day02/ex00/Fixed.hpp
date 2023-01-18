#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int fixed_point;
	static const int fractional_bits = 8;
	
public:
	Fixed();
	Fixed(const Fixed &);
	Fixed &operator=(const Fixed &);
	void setRawBits( int const raw );
	int getRawBits( void ) const;
	~Fixed();

};

#endif // !FIXED_HPP
