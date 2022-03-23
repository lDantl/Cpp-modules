#include "iter.hpp"

int main()
{
    int a[] = {21, -21, 0, 2121, -0, +1212};
    ::iter<int>(a, 6, ft_print);

    return (0);
}