// #include <iostream>
// #include "Fixed.hpp"

// int main( void ) {

// 	Fixed 		a;
// 	Fixed const b( 10 );
	// Fixed const c( 42.42f );
	// Fixed const d( b );

	// a = Fixed( 1234.4321f );

	// std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;


	// std::cout << "++a = " << ++a << std::endl;
	// std::cout << "a++ = " << a++ << std::endl;
	// std::cout << "a = " << a << std::endl;


	// std::cout << "b + a = " << (b + a) << std::endl;
	// std::cout << "b - a = " << (b - a) << std::endl;
	// std::cout << "b * a = " << (b * a) << std::endl;
	// std::cout << "b / a = " << (b / a) << std::endl;
	// std::cout << "a / b = " << (a / b) << std::endl;



	// std::cout << "b > a = " << (b > a) << std::endl;
	// std::cout << "a > b = " << (a > b) << std::endl;
	// std::cout << "b >= a = " << (b >= a) << std::endl;
	// std::cout << "a >= b = " << (a >= b) << std::endl;
	// std::cout << "b < a = " << (b < a) << std::endl;
	// std::cout << "a < b = " << (a < b) << std::endl;
	// std::cout << "b <= a = " << (b <= a) << std::endl;
	// std::cout << "a <= b = " << (a <= b) << std::endl;
	// std::cout << "b == a = " << (b == a) << std::endl;
	// std::cout << "a == b = " << (a == b) << std::endl;
	// std::cout << "b != a = " << (b != a) << std::endl;
	// std::cout << "a != b = " << (a != b) << std::endl;

	// a = b;
	// std::cout << "------------------------" << std::endl;
	// std::cout << "b == a = " << (b == a) << std::endl;
	// std::cout << "a == b = " << (a == b) << std::endl;
	// std::cout << "b != a = " << (b != a) << std::endl;
	// std::cout << "a != b = " << (a != b) << std::endl;



	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;

	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;

// 	return 0;
// }

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const & a, Point const & b, Point const & c, Point const & point);

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

Point A(0, 0);
Point B(10, 30);
Point C(20, 0);

//Point P(10, 15);
Point P(30, 15);
if (bsp(A, B, C, P))
	std::cout << "Point inside the triangle" << std::endl;
else
	std::cout << "Point outside the triangle" << std::endl;

return 0;
}