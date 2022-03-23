#include <iostream>
#include <string>
#include "Data.hpp"

uintptr_t   serialize(Data  *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data *data = new Data;

    data->value1 = "15";
	std::cout << data->value1 << '\n';
	std::cout << "Address data: " << data << '\n';
	std::cout << "Ptr : " << serialize(data) << '\n';
	std::cout << "Address data: " << deserialize(serialize(data)) << '\n';

	delete data;

	return (0);
}
