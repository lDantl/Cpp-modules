#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;


    public:
        Cat();
        virtual ~Cat();
        Cat(Cat const &src);
        Cat &operator=(Cat const &hrs);
    
        virtual void    makeSound() const;
        void    print_ideas();
};  

#endif