#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* k = new Animal("Canary");
    const WrongAnimal* w_meta = new WrongAnimal();
    const WrongAnimal* w_i = new WrongCat();


    std::cout << j->getType() << " " << '\n';
    std::cout << i->getType() << " " << '\n';
    std::cout << k->getType() << " " << '\n';
    i->makeSound();   //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    k->makeSound();

    std::cout << w_i->getType() << " " << '\n';
    std::cout << w_meta->getType() << " " << '\n';
    w_i->makeSound(); //will NOT output the cat sound!
    w_meta->makeSound();

    delete meta;
    delete j;
    delete i;
    delete k;
    delete w_meta;
    delete w_i;
    return 0;
}