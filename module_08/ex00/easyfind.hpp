#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <list>

class NotFound : public std::exception {
	const char* what(void) const throw() {
		return "Element isn't found";
	}
};

template <typename T>
int easyfind(T &t, int i)
{
    typename T::iterator found = find(t.begin(), t.end(), i);
    if (found == t.end())
        throw NotFound();
    return (*found);
}
