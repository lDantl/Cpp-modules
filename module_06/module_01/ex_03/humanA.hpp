#ifndef HUMANA_H
#define HUMANA_H

#include "weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &type);
		void attack();
	
	private:
		std::string 	name_hA;
		Weapon			&_weapon;
};

#endif