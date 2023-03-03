#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {

	Point A(0, 0);
	Point B(10, 30);
	Point C(20, 0);

	Point P(10, 15);
	//Point P(30, 15);
	if (bsp(A, B, C, P))
		std::cout << "Point inside the triangle" << std::endl;
	else
		std::cout << "Point outside the triangle" << std::endl;

	return 0;
}