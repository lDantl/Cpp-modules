#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
    DiamondTrap diamondTrap1("Rambo");
    diamondTrap1.attack("Born");
    diamondTrap1.whoAmI();

    return (0);
}