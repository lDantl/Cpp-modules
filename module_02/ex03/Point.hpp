#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;

        Point &operator=(Point const &src);

    public:
        Point();
        Point(Point const &src);
        Point(float const x, float const y);
        ~Point();

        Fixed   get_x(void) const;
        Fixed   get_y(void) const;
};

#endif
