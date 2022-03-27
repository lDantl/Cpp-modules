#pragma once

#include <exception>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

class Span
{
    private:
        std:: vector<int>   arr;
        static void         printElement(int &n);
        bool    vectorCapasityIsSufficient(int nbrElementsToAdd);
        bool    checkSpan();

    public:
        Span(unsigned int N=0);
        Span(Span const &src);
        ~Span();
        Span &operator=(Span const &rhs);

        void    addNumber(const int &n);
        void    addNumber(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();
        void    printSpan();

        class NoSpanToFind : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class VectorCapacityInsufficient : public std::exception
        {
            public:
                const char *what() const throw();
        };
};