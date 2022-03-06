#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap |" << "Player2" << "| was be created!" << '\n';
	this->name = "Player2";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 0;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 10;
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
    this->hitPoints = scav_trap.hitPoints;
    this->energyPoints = scav_trap.energyPoints;
}

std::string ScavTrap::getName()
{
    return(this->name);
}

void    ScavTrap::attack(std::string const &target)
{
	if (this->energyPoints < 1)
		std::cout << "ScavTrap |" << this->name 
			<< "| does not have enouge energy points to attack!" << '\n';
	else
	{
		this->energyPoints -= 1;
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
    this->hitPoints = scav_trap.hitPoints;
    this->energyPoints = scav_trap.energyPoints;
    this->attackDamage = scav_trap.attackDamage;
    return (*this);
}
