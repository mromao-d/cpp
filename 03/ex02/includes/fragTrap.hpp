#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// #include <iostream>
#include "clapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap (std::string name);
		~FragTrap (void);
		void highFivesGuys (void);
};

#endif
