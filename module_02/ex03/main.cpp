#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point const a(0, 0);
    Point const b(15, 0);
    Point const c(0, 15);
    Point const point(0, 0);
    std::cout << "a.x: " << a.get_x() << '\n';
    std::cout << "a.y: " << a.get_y() << '\n';
    std::cout << "b.x: " << b.get_x() << '\n';
    std::cout << "b.y: " << b.get_y() << '\n';
    std::cout << "c.x: " << c.get_x() << '\n';
    std::cout << "c.y: " << c.get_y() << '\n';
    std::cout << "point.x: " << point.get_x() << '\n';
    std::cout << "point.y: " << point.get_y() << '\n';
    if (bsp(a, b, c, point))
        std::cout << "the point is in a triangle" << '\n';
    else
        std::cout << "the point is not in a triangle" << '\n';
	return (0);
}