#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void report();
		Zombie(std::string name);
		~Zombie();
};
void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif