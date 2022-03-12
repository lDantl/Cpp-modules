#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(Cat const &src);
        Cat &operator=(Cat const &hrs);
    
        virtual void    makeSound() const;
};  

#endif