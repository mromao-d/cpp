// #ifndef WEAPON_HPP
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "./Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon&		WeaponA;
	public:
		HumanA(std::string	name, Weapon&	weapon);
		~HumanA(void);

		void	set_name(std::string	name);
		void	attack(void);
};

#endif
