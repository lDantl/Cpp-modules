#include "zombie.hpp"

Zombie::Zombie(std::string input)
{
	name = input;
}

Zombie::~Zombie()
{
	std::cout << name << " Is dead" << '\n';
}

void Zombie::report()
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << '\n';
}