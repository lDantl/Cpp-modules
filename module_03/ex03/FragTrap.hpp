#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &scav_trap);
		FragTrap(std::string name);

	std::string getName();
	void highFivesGuys();

	FragTrap &operator=(FragTrap const &frag_trap);
};

#endif