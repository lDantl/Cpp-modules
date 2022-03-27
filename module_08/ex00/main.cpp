#include "easyfind.hpp"

int main()
{
    std::vector<int>    vec;
    std::list<int>      list;

    for (int i = 0; i < 20; i++)
    {
        vec.push_back(i);
        list.push_back(i);
    }

    try
    {
        easyfind(vec, 19);
        std::cout << "Number found!" << '\n';
    } catch (std::exception &e) {std::cout << e.what() << '\n';}

    try
    {
        easyfind(vec, 1212);
        std::cout << "Number found!" << '\n';
    } catch (std::exception &e) {std::cout << e.what() << '\n';}


    try
    {
        easyfind(vec, -1);
        std::cout << "Number found!" << '\n';
    } catch (std::exception &e) {std::cout << e.what() << '\n';}


    try
    {
        easyfind(vec, 42);
        std::cout << "Number found!" << '\n';
    } catch (std::exception &e) {std::cout << e.what() << '\n';}

    try
    {
        easyfind(vec, 21);
        std::cout << "Number found!" << '\n';
    } catch (std::exception &e) {std::cout << e.what() << '\n';}

    try
    {
        easyfind(vec, 12);
        std::cout << "Number found!" << '\n';
    } catch (std::exception &e) {std::cout << e.what() << '\n';}

    return (0);
}