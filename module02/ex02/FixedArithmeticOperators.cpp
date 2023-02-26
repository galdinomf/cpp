#include "Fixed.hpp"

float	Fixed::operator+(const Fixed & rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

float	Fixed::operator-(const Fixed & rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

float	Fixed::operator*(const Fixed & rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

float	Fixed::operator/(const Fixed & rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}