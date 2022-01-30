#include "zombie.hpp"

int	main()
{
	Zombie zombie_1("zombie #1");
	zombie_1.report();
	randomChump("zombie #2");
	Zombie *zombie_3 = newZombie("zombie #3");
	delete zombie_3;
	return (0);
}