#include "convert.hpp"

void    print_double(double const &d, int const &precison)
{
    std::cout << std::fixed << std::setprecision(precison);
    std::cout << "double: " << d << '\n';
}

void    print_double(char const &c, int const &precison)
{
    double const d = static_cast<double const>(c);
    print_double(d, precison);
}

void    print_double(int const &i, int const &precison)
{
    double const d = static_cast<double const>(i);
    print_double(d, precison);
}

void    print_double(float const &f, int const &precison)
{
    double const d = static_cast<double const>(f);
    print_double(d, precison);
}