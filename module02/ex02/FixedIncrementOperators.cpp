#include "Fixed.hpp"

Fixed&	Fixed::operator++()
{
	_value += 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;

	this->_value += 1;
	return temp;
}

Fixed&	Fixed::operator--()
{
	_value -= 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;

	this->_value -= 1;
	return temp;
}