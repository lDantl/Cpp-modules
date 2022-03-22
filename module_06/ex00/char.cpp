#include <iostream>
#include <cmath>
#include <cctype>

void    print_char(char const &c)
{
    if (isprint(c))
        std::cout << "char: " << '\'' << c << '\'' << '\n';
    else
        std::cout << "char: Non displayble" << '\n';
}

void    print_char(int const &i)
{
    char const  c = static_cast<char const>(i);
    print_char(c);
}

void    print_char(double const &d)
{
    if (isinf(d) || isnan(d))
        std::cout << "char: impossible" << '\n';
    else
    {
        char const  c = static_cast<char const>(d);
        print_char(c);
    }
}

void    print_char(float const &f)
{
     if (isinf(f) || isnan(f))
        std::cout << "char: impossible" << '\n';
    else
    {
        char const  c = static_cast<char const>(f);
        print_char(c);
    }
}