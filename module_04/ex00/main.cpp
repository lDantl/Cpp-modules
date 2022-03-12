#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* a = new Animal();
const Animal* d = new Dog();
const Animal* c = new Cat();
std::cout << d->getType() << " " << std::endl;
std::cout << c->getType() << " " << std::endl;
c->makeSound();
d->makeSound();
a->makeSound();
return 0;
}