#include "Point.hpp"

float	signedTriangleArea(const Point p1, const Point p2, const Point p3)
{
	return  ((p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) - \
			(p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = signedTriangleArea(point, a, b);
	d2 = signedTriangleArea(point, c, a);
	d3 = signedTriangleArea(point, b, c);

	has_neg = ((d1 < 0) || (d2 < 0) || (d3 < 0));
	has_pos = ((d1 > 0) || (d2 > 0) || (d3 > 0));

	return !(has_neg && has_pos);
}