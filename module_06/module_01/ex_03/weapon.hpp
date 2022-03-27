#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	public:
		std::string getType(void) const;
		void		setType(const std::string name);

		Weapon(std::string name);
	
	private:
		std::string weapon;

};

#endif