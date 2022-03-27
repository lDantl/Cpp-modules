#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <sstream>

class Zombie
{
	private:
		std::string name;

	public:
		void announce();
		void setName(std::string _name);
		Zombie();
		~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);

#endif