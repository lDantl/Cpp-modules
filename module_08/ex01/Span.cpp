#include "Span.hpp"

Span::Span(unsigned int N)
{
    arr.reserve(N);
}

Span::Span(Span const &src) : arr(src.arr)
{
    return ;
}

Span::~Span() {};

Span &Span::operator=(Span const &rhs)
{
    this->arr = rhs.arr;
    return (*this);
}

void Span::addNumber(const int &n)
{
    if (vectorCapasityIsSufficient(1) == false)
    {
        throw VectorCapacityInsufficient();
        return ;
    }
    arr.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end)
{
    if (vectorCapasityIsSufficient(std::distance(it_begin, it_end)) == false)
    {
        throw VectorCapacityInsufficient();
        return ;
    }
    arr.insert(arr.begin(), it_begin, it_end);
}

unsigned int Span::shortestSpan()
{
    if (checkSpan() == false)
    {
        throw NoSpanToFind();
        return (0);
    }
    std::vector<int> dup(arr);
    std::sort(dup.begin(), dup.end());
    int shortestSpan = std::numeric_limits<int>::max();
    for (std::vector<int>::iterator i = dup.begin(); i < dup.end(); i++)
    {
        if (i + 1 != dup.end() && shortestSpan > std::abs((*(i + 1)) - (*i)))
            shortestSpan = std::abs((*(i + 1)) - (*i));
    }
    return (shortestSpan);
}

unsigned int Span::longestSpan()
{
    if (checkSpan() == false)
    {
        throw NoSpanToFind();
        return (0);
    }
    int max = *std::max_element(arr.begin(), arr.end());
    int min = *std::min_element(arr.begin(), arr.end());
    return (max - min);
}

void Span::printElement(int &n)
{
    std::cout << " " << n;
}

bool Span::checkSpan()
{
    return (this->arr.size() > 1);
}

bool Span::vectorCapasityIsSufficient(int nbrElementsToAdd)
{
    return (this->arr.size() + nbrElementsToAdd <= this->arr.capacity());
}

void Span::printSpan()
{
    for_each(arr.begin(), arr.end(), printElement);
}

const char *Span::NoSpanToFind::what() const throw()
{
    return ("No span to find");
}

const char *Span::VectorCapacityInsufficient::what() const throw()
{
    return ("Span capacity insufficient");
}