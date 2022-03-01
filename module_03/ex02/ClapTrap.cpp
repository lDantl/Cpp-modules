#include "ClapTrap.hpp"

// ClapTrap::ClapTrap()
// {
// 	 std::cout << "ClapTrap <" << "Unknown" << "> was created!!" << std::endl;
//     name = "Unknown";
//     health = 10;
//     energyPoints = 10;
//     attackDamage = 0;
// }

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->health = 100;
	this->energyPoints = 50;
	this->attackDamage = 0;
	std::cout << "ClapTrap |" << name << "| was created!" << '\n';
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap |" << this->name << "| the fight is over!" << '\n';
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap)
{
	this->name = clap_trap.name;
	this->attackDamage = clap_trap.attackDamage;
	this->energyPoints = clap_trap.energyPoints;
	this->health = clap_trap.health;
}

void	ClapTrap::setAttackDamage(unsigned int const ammount)
{
	this->attackDamage = ammount;
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

void    ClapTrap::attack(std::string const &target)
{
	if (this->energyPoints < this->attackDamage)
		std::cout << "ClapTrap |" << this->name 
			<< "| does not have enouge energy points to attack!" << '\n';
	else
	{
		this->energyPoints -= this->attackDamage;
		std::cout << "ClapTrap |" << this->name << "| attacks |" << target 
			<< "| , dealing him " << this->attackDamage << " points of damage!" << '\n';
	}
}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	if (this->health < ammount)
	{
		this->health = 0;
		std::cout << "ClapTrap |" << this->name << "| take " << ammount << " points of damage!" << '\n';
		std::cout << "ClapTrap |" << this->name << "| is dead!!" << '\n';
		exit(0);
	}
		else
	{
		this->health -= ammount;
		std::cout << "ClapTrap |" << this->name << "| take " << ammount << " points of damage!" << '\n';
		if (this->health == 0)
		{
			std::cout << "ClapTrap |" << this->name << "| is dead!!" << '\n';
			exit(0);
		}
	}
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	this->health += ammount;
	std::cout << "ClapTrap |" << this->name << "| was repaired by " << ammount << " of hit points!" << '\n';	
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &clap_trap)
{
    this->name = clap_trap.name;
    this->health = clap_trap.health;
    this->energyPoints = clap_trap.energyPoints;
    this->attackDamage = clap_trap.attackDamage;
    return (*this);
}
