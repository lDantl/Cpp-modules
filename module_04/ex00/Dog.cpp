#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor" << '\n';
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << '\n';
}

Dog::Dog(Dog const &src)
{
    std::cout << "Dog copy constructor" << '\n';
    *this = src;

}

Dog &Dog::operator=(Dog const &rhs)
{
    type = rhs.type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Woof" << '\n';
}