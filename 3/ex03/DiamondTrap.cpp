#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap |" << "Player4" << "| was created!" << '\n';
	this->name = "Player4";
    ScavTrap::name = "ST Player";
	FragTrap::hitPoints = 100;
    ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Trap |" << this->name << "| the fight is over!" << '\n';
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond_trap)
{
    this->name = diamond_trap.name;
    this->hitPoints = diamond_trap.hitPoints;
    this->energyPoints = diamond_trap.energyPoints;
    this->attackDamage = diamond_trap.attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap |" << name << "| was created!" << '\n';
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage =  FragTrap::attackDamage;
}

void    DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My DiamondTrap name is |" << this->name << "| and my ClapTrap name is |"
                << ClapTrap::name << "| "<< '\n';
}

DiamondTrap     &DiamondTrap::operator=(DiamondTrap const &diamond_trap)
{
    this->name = diamond_trap.name;
    this->hitPoints = diamond_trap.hitPoints;
    this->energyPoints = diamond_trap.energyPoints;
    this->attackDamage = diamond_trap.attackDamage;
    return (*this);
}