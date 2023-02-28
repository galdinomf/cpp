#include "Fixed.hpp"

float	Fixed::operator+(const Fixed & rhs) const
{
	Fixed	f;

	f.setRawBits(this->getRawBits() + rhs.getRawBits());
	return f.toFloat();
}

float	Fixed::operator-(const Fixed & rhs) const
{
	Fixed	f;

	f.setRawBits(this->getRawBits() - rhs.getRawBits());
	return f.toFloat();
}

float	Fixed::operator*(const Fixed & rhs) const
{
	Fixed	f;
	
	f.setRawBits((this->getRawBits() * rhs.getRawBits()));
	f.setRawBits(f.toFloat());
	return f.toFloat();
}

float	Fixed::operator/(const Fixed & rhs) const
{
	return this->toFloat() / rhs.toFloat();
}