#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor" << '\n';
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << '\n';
}

Cat::Cat(Cat const &src)
{
    std::cout << "Cat copy constructor" << '\n';
    *this = src;
}

Cat &Cat::operator=(Cat const &rhs)
{
    type = rhs.type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Meow" << '\n';
}