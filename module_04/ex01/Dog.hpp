#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog();
        virtual ~Dog();
        Dog(Dog const &src);
        Dog &operator=(Dog const &rhs);
        
        virtual void    makeSound() const;
        void    print_ideas();
};

#endif