#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "clapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap (std::string name);
		~ScavTrap (void);
		void	attack(const std::string& target);
};

#endif
