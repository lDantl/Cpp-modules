#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
    DiamondTrap diamondTrap1("DiamondT1");
    diamondTrap1.attack("CX");
    diamondTrap1.whoAmI();

	// DiamondTrap Rambo("Rambo");
    // FragTrap Born("Born");
    // Rambo.guardGate();
    // Rambo.attack("Born");
    // Born.takeDamage(Rambo.getAttackDamage());
    // Born.beRepaired(40);
    // Born.attack("Rambo");
    // Rambo.takeDamage(Born.getAttackDamage());
    // Born.highFivesGuys();
    // Rambo.whoAmI();
    // Born.attack("Rambo");
    // Rambo.takeDamage(Born.getAttackDamage());

    return (0);
}