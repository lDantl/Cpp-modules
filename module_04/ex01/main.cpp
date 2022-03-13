#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
    const Animal*	j = new Dog();
    const Animal*	i = new Cat();
    Cat				*Inox = new Cat();
    Cat				Tom;
    
    std::cout << Inox->getType() << " " << std::endl;
    Inox->makeSound();
    std::cout << "Inox :" << std::endl;
    Inox->print_ideas();
    Tom = *Inox;
    std::cout << "Tom :" << std::endl;
    Tom.print_ideas();
    
    delete j;
    delete i;
    delete Inox;
    return 0;
}