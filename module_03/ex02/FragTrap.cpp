#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap |" << "Player3" << "| was be created!" << '\n';
	this->name = "Player3";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap |" << name << "| was created!" << '\n';
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap |" << this->name << "| the fight is over!" << '\n';
}

FragTrap::FragTrap(const FragTrap &frag_trap) : ClapTrap(frag_trap)
{
	this->name = frag_trap.name;
	this->hitPoints = frag_trap.hitPoints;
	this->energyPoints = frag_trap.energyPoints;
	this->attackDamage = frag_trap.attackDamage;
}

std::string FragTrap::getName()
{
	return (this->name);
}

void	FragTrap::highFivesGuys()
{
	if (this->hitPoints)
		std::cout << "high Fives Guys!" << '\n';
}

FragTrap	&FragTrap::operator=(FragTrap const &frag_trap)
{
	this->name = frag_trap.name;
	this->hitPoints = frag_trap.hitPoints;
	this->energyPoints = frag_trap.energyPoints;
	this->attackDamage = frag_trap.attackDamage;
	return (*this);
}
