#pragma once

#include <string>
#include <iostream>

template<class T>
void iter(T *address, int length, void(*f)(const T &element))
{
    for (int i = 0; i < length; i++)
        f(address[i]);
}

template<class T>
void ft_print(T a)
{
    std::cout << a << '\n';
}