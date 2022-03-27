#include "humanA.hpp"

HumanA::HumanA(std::string input, Weapon &weapon) : name_hA(input), _weapon(weapon) {}

void	HumanA::attack()
{
	std::cout << name_hA << " attacks with his " << _weapon.getType() << '\n';
}