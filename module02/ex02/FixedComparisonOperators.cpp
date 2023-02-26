#include <iostream>
#include "Fixed.hpp"

Fixed& Fixed::operator=(const Fixed & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->_value = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed & rhs) const
{
	return this->_value > rhs.getRawBits();
}

bool	Fixed::operator<(const Fixed & rhs) const
{
	return this->_value < rhs.getRawBits();
}

bool	Fixed::operator>=(const Fixed & rhs) const
{
	return this->_value >= rhs.getRawBits();
}

bool	Fixed::operator<=(const Fixed & rhs) const
{
	return this->_value <= rhs.getRawBits();
}

bool	Fixed::operator==(const Fixed & rhs) const
{
	return this->_value == rhs.getRawBits();
}

bool	Fixed::operator!=(const Fixed & rhs) const
{
	return this->_value != rhs.getRawBits();
}

