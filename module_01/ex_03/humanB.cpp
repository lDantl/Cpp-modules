#include "humanB.hpp"

HumanB::HumanB(std::string input) : name_hB(input) {}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

void	HumanB::attack()
{
	std::cout << name_hB << " attacks with his " << _weapon.getType() << '\n';
}
