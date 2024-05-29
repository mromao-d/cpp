// #ifndef WEAPON_HPP
#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP

#include <iostream>
#include <cstdlib>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(void);
		Weapon(std::string	weapon);
		~Weapon(void);
		void	setType(std::string	weapon);
		std::string	const	&getType(void);
};

#endif
