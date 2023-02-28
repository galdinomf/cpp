#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) : _value(0)
{
	//std::cout << "Default constructor called." << std::endl;
	return ;
}

Fixed::Fixed( const Fixed & src )
{
	//std::cout << "Copy constructor called." << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called." << std::endl;
	return ;
}

Fixed::Fixed( const int n )
{
	//std::cout << "Int constructor called." << std::endl;
	_value = (n << _fracBits);
}

Fixed::Fixed( const float f )
{
	int		int_part_bits;
	int		frac_part_bits;
	float	frac_part;
	float	t;
	int		i;

//	std::cout << "Float constructor called." << std::endl;
	int_part_bits = (int) f << _fracBits;
	frac_part = f - ((int) f);
	t = 0.5;
	i = -1;
	frac_part_bits = 0;
	while (++i < _fracBits)
	{
		if ((frac_part - t >= 0.001) || (t - frac_part <= 0.001))
		{
			frac_part_bits += 1 << (_fracBits - 1 - i);
			frac_part -= t;
		}
		t /= 2;
	}
	_value = (int_part_bits + frac_part_bits);
}

int	Fixed::getRawBits( void ) const
{
	return this->_value;
}

void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called." << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat( void ) const
{
	int		int_part;
	float	frac_part;
	int		i;

	int_part = _value >> _fracBits;
	frac_part = 0;
	i = -1;
	while (++i < _fracBits)
		frac_part += ((_value >> i) & 1) * pow(2, ((-1) * (_fracBits - i)));
	return (int_part + frac_part);
}

int	Fixed::toInt( void ) const
{
	return (_value >> _fracBits);
}

std::ostream& operator << (std::ostream & o, const Fixed & fn)
{
	o << fn.toFloat();
	return o;
}