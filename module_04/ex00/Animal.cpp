#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor" << '\n';
    type = "default";
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << '\n';
}

Animal::Animal( std::string type)
{
    std::cout << "Animal constructor, type: " << type << '\n';
    this->type = type;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor, copying a " << src.type << '\n';
    *this = src;
}

Animal  &Animal::operator=(Animal const &hrs)
{
    type = hrs.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "*this is animal noise*" << '\n'; 
}

std::string Animal::getType() const
{
    return (type);
}