#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string type;    
    
    public:
        Animal();
        ~Animal();
        Animal(Animal const &src);
        Animal(std::string type);
        Animal &operator=(Animal const &rhs);

        virtual void    makeSound() const;
        std::string     getType() const;
};

#endif