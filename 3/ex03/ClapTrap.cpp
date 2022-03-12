#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClpTrap |" << "Player1" << "| was be created!" << '\n';
	this->name = "Player1";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 0;
	this->dead = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 100;
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
	this->hitPoints = clap_trap.hitPoints;
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
	if (hitPoints <= 0)
	{
		dead = 1;
		return ;
	}
	if (this->energyPoints < 1)
		std::cout << "ClapTrap |" << this->name 
			<< "| does not have enouge energy points to attack!" << '\n';
	else
	{
		this->energyPoints -= 1;
		std::cout << "ClapTrap |" << this->name << "| attacks |" << target 
			<< "| , dealing him " << this->attackDamage << " points of damage!" << '\n';
	}
}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	if (dead == 1)
	{
		return ;
	}
	if (this->hitPoints < ammount)
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap |" << this->name << "| take " << ammount << " points of damage!" << '\n';
		std::cout << "ClapTrap |" << this->name << "| is dead!!" << '\n';
	}
		else
	{
		this->hitPoints -= ammount;
		std::cout << "ClapTrap |" << this->name << "| take " << ammount << " points of damage!" << '\n';
		if (this->hitPoints == 0)
		{
			std::cout << "ClapTrap |" << this->name << "| is dead!!" << '\n';
		}
	}
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	if (this->hitPoints <= 0)
		return ;
	this->hitPoints += ammount;
	std::cout << "ClapTrap |" << this->name << "| was repaired by " << ammount << " of hit points!" << '\n';	
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &clap_trap)
{
    this->name = clap_trap.name;
    this->hitPoints = clap_trap.hitPoints;
    this->energyPoints = clap_trap.energyPoints;
    this->attackDamage = clap_trap.attackDamage;
    return (*this);
}
