#include "zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie *zombie = new Zombie[N];
	std::stringstream	sstream;

	for(int i = 0; i < N; i++)
	{
		sstream << i;
		zombie[i].setName(name + sstream.str());
		sstream.str(std::string());
	}
	return (zombie);
}