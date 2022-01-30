#include "zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	zombie->report();
	return (zombie);
}