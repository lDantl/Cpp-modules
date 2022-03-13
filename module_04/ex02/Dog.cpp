#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << "Dog default constructor" << '\n';
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor" << '\n';
}

Dog::Dog(Dog const &src)
{
    brain = new Brain(*src.brain);
    std::cout << "Dog copy constructor" << '\n';
    *this = src;
}

Dog &Dog::operator=(Dog const &rhs)
{
    type = rhs.type;
    delete brain;
    brain = new Brain(*rhs.brain);
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Meow" << '\n';
}

void    Dog::print_ideas()
{
    std::cout << brain << '\n';
}