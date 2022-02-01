#include "point.hpp"

#define Vec2D Point

Vec2D subVec(Point const &a, Point  const &b)
{
	return (Vec2D((a.get_x() - b.get_x()).toFloat(), (a.get_y() - b.get_y()).toFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Vec2D ab = subVec(b, a);
	Vec2D bp = subVec(point, b);

	Vec2D bc = subVec(c, b);
	Vec2D cp = subVec(point, c);

	Vec2D ca = subVec(a, c);
	Vec2D ap = subVec(point, a);

	Fixed cross_1 = ab.get_x() * bp.get_y() - ab.get_y() * bp.get_x();
	Fixed cross_2 = bc.get_x() * cp.get_y() - bc.get_y() * cp.get_x();
	Fixed cross_3 = ca.get_x() * cp.get_y() - ca.get_y() * cp.get_x();

	if (cross_1 > Fixed(0) && cross_2 > Fixed(0) && cross_3 > Fixed(0))
		return (true);
	if (cross_1 < Fixed(0) && cross_2 < Fixed(0) && cross_3 < Fixed(0))
		return true;
	return (false);
}