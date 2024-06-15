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
};
