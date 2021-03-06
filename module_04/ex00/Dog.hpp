#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(Dog const &src);
        Dog &operator=(Dog const &rhs);
        virtual void    makeSound() const;
};

#endif