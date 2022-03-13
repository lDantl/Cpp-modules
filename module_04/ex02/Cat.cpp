#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "Cat default constructor" << '\n';
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor" << '\n';
}

Cat::Cat(Cat const &src)
{
    brain = new Brain(*src.brain);
    std::cout << "Cat copy constructor" << '\n';
    *this = src;
}

Cat &Cat::operator=(Cat const &rhs)
{
    type = rhs.type;
    delete brain;
    brain = new Brain(*rhs.brain);
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Meow" << '\n';
}

void    Cat::print_ideas()
{
    for (int i = 0; i < 100; i++)
        std::cout << brain->getIdea(i) << " ";
    std::cout << '\n';
}