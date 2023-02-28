#include "Point.hpp"

Point::Point( void ) : _x(Fixed(0)), _y(Fixed(0))
{
	return ;
}

Point::Point( const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	return ;
}

Point::Point( const Point & src)
{
	*this = src;
}

Point& Point::operator=(const Point &)
{
	return *this;
}

Point::~Point( void )
{
	return ;
}

const Fixed	Point::getX( void ) const
{
	return this->_x;
}

const Fixed	Point::getY( void ) const
{
	return this->_y;
}

// void	Point::setX( const float x ) const
// {
// 	this->_x = Fixed(x);
// }

// void	Point::setY( const float y ) const
// {
// 	this->_y = Fixed(y);
// }

