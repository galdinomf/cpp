#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point( void );
		Point( const float x, const float y);
		Point( const Point & p);
		Point & operator=(const Point & rhs);
		~Point( void );

		const Fixed	getX( void ) const;
		// void 	setX( const float x ) const;
		const Fixed	getY( void ) const;
		// void		setY( const float y ) const;

	private:
		Fixed const _x;
		Fixed const _y;

};


#endif