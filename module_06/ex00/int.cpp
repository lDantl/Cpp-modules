#include "convert.hpp"

void    print_int(int const &i)
{
    std::cout << "int: " << i << '\n';
}

void    print_int(char const &c)
{
    int const   i = static_cast<int const>(c);
    print_int(i);
}

void    print_int(double const &d)
{
    if (isinf(d) || isnan(d))
        std::cout << "int: impossible" << '\n';
    else
    {
        int const   i = static_cast<int const>(d);
        print_int(i);
    }
}

void    print_int(float const &f)
{
    if (isinf(f) || isnan(f))
        std::cout << "int:inposible" << '\n';
    else
    {
        int const   i = static_cast<int const>(f);
        print_int(i);
    }
}