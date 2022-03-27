#include "zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << name << " is dead" << '\n';
}

void Zombie::setName(std::string input)
{
	name = input;
}

void Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << '\n';
}
