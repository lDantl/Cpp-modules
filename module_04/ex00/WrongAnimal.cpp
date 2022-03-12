#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor" << '\n';
    type = "default";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << '\n';
}

WrongAnimal::WrongAnimal( std::string type)
{
    std::cout << "WrongAnimal constructor, type: " << type << '\n';
    this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "WrongAnimal copy constructor, copying a " << src.type << '\n';
    *this = src;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &hrs)
{
    type = hrs.type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "*this is WrongAnimal noise*" << '\n'; 
}

std::string WrongAnimal::getType() const
{
    return (type);
}