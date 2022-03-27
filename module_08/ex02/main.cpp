#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "MUTANT STACK" << '\n';
    MutanStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << '\n';
    mstack.pop();
    std::cout << mstack.size() << '\n';
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutanStack<int>::iterator it = mstack.begin();
    MutanStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << ' ';
        ++it;
    }
    std::cout << '\n';

    std::cout << "LIST" << '\n';
    std::list<int> mylist;
    mylist.push_back(5);
    mylist.push_back(17);
    std::cout << mylist.back() << '\n';
    mylist.pop_back();
    std::cout << mylist.size() << '\n';
    mylist.push_back(3);
    mylist.push_back(5);
    mylist.push_back(737);
    mylist.push_back(0);
    std::list<int>::iterator iter = mylist.begin();
    std::list<int>::iterator itend = mylist.end();
    ++iter;
    --iter;
    while (iter != itend)
    {
        std::cout << *iter << ' ';
        ++iter;
    }
    std::list<int> s2(mylist);
    std::cout << '\n';

    std::cout << "OTHER MUTANT STACK" << '\n';
    MutanStack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    MutanStack<int>::criterator it2 = s.crbegin();
    MutanStack<int>::criterator ite2 = s.crend();
    MutanStack<int>::iterator it3 = s.begin();
    MutanStack<int>::iterator ite3 = s.begin();
    while (it2 != ite2)
    {
        std::cout << *it2 << ' ';
        ++it2;
    }
    std::cout << '\n';
    while (it3 != ite3)
    {
        std::cout << *it3 << ' ';
        ++it3;
    }
    std::cout << '\n';
    return (0);
}