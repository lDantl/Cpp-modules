#include "Brain.hpp"

Brain::Brain()
{
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
        ideas[i] = posibleIdeas[rand() % posibleIdeas->length()];
    std::cout << "Default Brain constructor" << '\n';
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << '\n';
}

Brain::Brain(Brain const &src)
{
    std::cout << "Copy Brain contstructor" << '\n';
    for (int i = 0; i < 100; i++)
        ideas[i] = src.ideas[i];
}

Brain   &Brain::operator=(Brain const &rhs)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = rhs.ideas[i];
    return (*this);
}

std::string Brain::getIdea(int i)
{
    if (i >= 0 && i < 100)
        return (ideas[i]);
    return (NULL);
}