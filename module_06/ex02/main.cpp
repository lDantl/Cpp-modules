#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.hpp"

Base *generate()
{
    switch (rand() % 3)
    {
        case 0:
            return (dynamic_cast<Base*>(new A));

        case 1:
            return (dynamic_cast<Base*>(new B));

        case 2:
            return (dynamic_cast<Base*>(new C));

        default:
            return (NULL);        

    }
}

void    identify(Base &p)
{
    try
    {
        A a_class = dynamic_cast<A&>(p);
        std::cout << "type A" << '\n';
        return; 
    }
    catch(std::bad_cast &e) {}
    
    try
    {
        B b_class = dynamic_cast<B&>(p);
        std::cout << "type B" << '\n';
        return; 
    }
    catch(std::bad_cast &e) {}

    try
    {
        C c_class = dynamic_cast<C&>(p);
        std::cout << "type C" << '\n';
        return; 
    }
    catch(std::bad_cast &e) {}
}

void    identify(Base *p)
{
    A *a_class = dynamic_cast<A*>(p);
    if (a_class != NULL)
    {
        std::cout << "type A" << '\n';
        return;
    }

    B *b_class = dynamic_cast<B*>(p);
    if (b_class != NULL)
    {
        std::cout << "type B" << '\n';
        return;
    }

    C *c_class = dynamic_cast<C*>(p);
    if (c_class != NULL)
    {
        std::cout << "type C" << '\n';
        return;
    }
}

int main()
{
    srand(time(0));

    Base *base = generate();

    identify(base);
    identify(*base);

    delete base;
    return (0);
}