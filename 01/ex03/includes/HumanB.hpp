// #ifndef WEAPON_HPP
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "./Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		*WeaponB;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon *weapon);
		// void	setWeapon(Weapon& weapon);
		void	attack(void);
};

#endif
