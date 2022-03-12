#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor" << '\n';
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << '\n';
}

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout << "WrongCat copy constructor" << '\n';
    *this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    type = rhs.type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "Meow" << '\n';
}