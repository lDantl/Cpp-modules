#pragma once

#include <iterator>
#include <stack>
#include <iostream>

template <class T>
class MutanStack : public std::stack<T>
{
    public:
        MutanStack() : std::stack<T>() {}
        MutanStack(MutanStack<T> &obj) : std::stack<T>(obj) {}
        ~MutanStack() {}

        MutanStack &operator=(MutanStack &obj) 
        {
            this->c = obj.c;
            return (*this);
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin() {return (this->c.begin());}
        iterator    end() {return (this->c.end());}

        typedef typename std::stack<T>::container_type::reverse_iterator riterator;
        riterator    rbegin() {return (this->c.rbegin());}
        riterator    rend() {return (this->c.rend());}

        typedef typename std::stack<T>::container_type::const_iterator citerator;
        citerator    cbegin() {return (this->c.begin());}
        citerator    cend() {return (this->c.end());}

        typedef typename std::stack<T>::container_type::const_reverse_iterator criterator;
        criterator    crbegin() {return (this->c.rbegin());}
        criterator    crend() {return (this->c.rend());}
        
};