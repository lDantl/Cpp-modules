#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string		name;
    
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &diamond_trap);
        DiamondTrap(std::string name);
    
    void    attack(std::string const &target);
    void    whoAmI();

    DiamondTrap &operator=(DiamondTrap const &diamond_trap);
};

#endif