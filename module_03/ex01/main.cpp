#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap Rambo("Rambo");
	ScavTrap Born("Born");

	Rambo.setAttackDamage(15);
	Rambo.attack("Born");
	Born.takeDamage(Rambo.getAttackDamage());
	Born.guardGate();
	Born.attack("Rambo");
	Rambo.takeDamage(Born.getAttackDamage());
	Rambo.beRepaired(15);
	Rambo.attack("Born");
	Born.takeDamage(Rambo.getAttackDamage());
	Born.beRepaired(10);

    return (0);
}