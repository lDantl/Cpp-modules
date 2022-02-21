#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->health = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap |" << name << "| was created!" << '\n';
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap |" << this->name << "| the fight is over!" << '\n';
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap) : ClapTrap(scav_trap)
{
    this->name = scav_trap.name;
    this->attackDamage = scav_trap.attackDamage;
    this->health = scav_trap.health;
    this->energyPoints = scav_trap.energyPoints;
}

std::string ScavTrap::getName()
{
    return(this->name);
}

void    ScavTrap::attack(std::string const &target)
{
	if (this->energyPoints < this->attackDamage)
		std::cout << "ScavTrap |" << this->name 
			<< "| does not have enouge energy points to attack!" << '\n';
	else
	{
		this->energyPoints -= this->attackDamage;
		std::cout << "ScavTrap |" << this->name << "| attacks |" << target 
			<< "| , dealing him " << this->attackDamage << " points of damage!" << '\n';
	}
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap |" << this->name << "| have interred Gate keeper mode!" << '\n';
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &scav_trap)
{
    this->name = scav_trap.name;
    this->health = scav_trap.health;
    this->energyPoints = scav_trap.energyPoints;
    this->attackDamage = scav_trap.attackDamage;
    return (*this);
}
