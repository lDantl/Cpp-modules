#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &src);
        WrongAnimal &operator=(WrongAnimal const &rhs);

        void    makeSound() const;
        std::string getType() const;
};

#endif