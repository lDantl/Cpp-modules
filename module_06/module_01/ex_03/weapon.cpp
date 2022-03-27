#include "weapon.hpp"

Weapon::Weapon(std::string weapon_name)
{
	weapon = weapon_name;
}

std::string Weapon::getType() const
{
	return(weapon);
}

void Weapon::setType(const std::string weapon_name)
{
	weapon = weapon_name;
}