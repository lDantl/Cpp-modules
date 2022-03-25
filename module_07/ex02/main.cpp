#include "Array.hpp"

int main()
{
	Array<int> arr(10);
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		arr[i] = i + 1;
	}
	for (unsigned int i = 0; i < arr.size() ; i++)
	{
		std::cout << arr[i] << '\n';
	}
	Array<int> arr2(arr);
	for (unsigned int i = 0; i < arr.size() ; i++)
	{
		std::cout << arr2[i] << '\n';
	}
	Array<std::string> s;
}