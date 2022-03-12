#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap &scav_trap);
		ScavTrap(std::string _name);

		std::string getName();

		void	guardGate();
		void	attack(std::string const &target);

		ScavTrap &operator=(ScavTrap const &scav_trap);
};

#endif
