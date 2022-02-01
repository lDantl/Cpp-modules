#include "point.hpp"

Point::Point() : x(0), y(0) {}
Point::~Point() {}
Point::Point(Point const &src) : x(src.x), y(src.y) {}
Point::Point(float const x, float const y) : x(x), y(y) {}

Point &Point::operator=(Point const &src)
{
    if (this != &src)
    {
        const_cast<Fixed&>(x) = src.x;
        const_cast<Fixed&>(y) = src.y;
    }
    return (*this);
}

Fixed Point::get_x() const
{
    return (x);
}

Fixed Point::get_y() const
{
    return (y);
}