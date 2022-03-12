#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Rambo("Rambo");
	ClapTrap Born("Born");

	Rambo.setAttackDamage(4);
	Rambo.attack("Born");
	Born.takeDamage(Rambo.getAttackDamage());
	Rambo.attack("Born");
	Born.takeDamage(Rambo.getAttackDamage());
	Rambo.attack("Born");
	Born.beRepaired(5);
	Rambo.attack("Born");

    return (0);
}