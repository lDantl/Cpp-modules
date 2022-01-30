#ifndef HUMANB_H
#define HUMANB_H

#include "weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack();
	
	private:
		std::string 	name_hB;
		Weapon			*_weapon;
};

#endif