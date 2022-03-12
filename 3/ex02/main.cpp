#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ScavTrap Rambo("Rambo");
    FragTrap Born("Born");
    Rambo.guardGate();
    Rambo.attack("Born");
    Born.takeDamage(Rambo.getAttackDamage());
    Born.beRepaired(40);
    Born.attack("Rambo");
    Rambo.takeDamage(Born.getAttackDamage());
    Born.highFivesGuys();
    Born.attack("Rambo");
    Rambo.takeDamage(Born.getAttackDamage());

    return (0);
}