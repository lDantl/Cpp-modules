#include "convert.hpp"

void    print_float(float const &f, int const &precison)
{
    std::cout << std::fixed << std::setprecision(precison);
    std::cout << "float: " << f << "f" << '\n';
}

void    print_float(char const &c, int const &precison)
{
    float const f = static_cast<float const>(c);
    print_float(f, precison);
}

void    print_float(int const &i, int const &precison)
{
    float const f = static_cast<float const>(i);
    print_float(f, precison);
}

void    print_float(double const &d, int const &precison)
{
    float const f = static_cast<float const>(d);
    print_float(f, precison);
}