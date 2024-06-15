#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cmath>

class ClapTrap
{
	private:
		std::string		Name;
		unsigned int	hitPts;
		unsigned int	energyPts;
		unsigned int	attackDmg;
	public:
		ClapTrap (std::string name);
		~ClapTrap (void);
		void	getAttributes (void);
		void	attack(const std::string& target);
		void	takeDamage (unsigned int amount);
		void	beRepaired (unsigned int amount);
		void	setHitPts (int	hitPts);
		void	setEnergyPts (int	energyPts);
		void	setAttackDmg (int	attackDmg);
		void	setName (std::string name);
		std::string	getName (void);
		int		getEnergyPts (void);
		int		getHitPts (void);
		int		getAttackDmg (void);
};

#endif
