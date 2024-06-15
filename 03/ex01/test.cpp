#include <iostream>
#include <cmath>

class ClapTrap
{
	private:
		std::string	Name;
		int			hitPts;
		int			energyPts;
		int			attackDmg;
	public:
		ClapTrap (std::string name);
		~ClapTrap (void);
		void	getAttributes (void);
		void	attack(const std::string& target);
		void	takeDamage (unsigned int amount);
};

ClapTrap::ClapTrap (std::string name) {
	std::cout << "contructor called!" << std::endl;
	this->Name = name;
	this->hitPts = 10;
	this->energyPts = 10;
	this->attackDmg = 0;
}

ClapTrap::~ClapTrap (void) {
	std::cout << "destructor called!" << std::endl;
}

void	ClapTrap::getAttributes (void) {
	std::cout << "Name is: " << this->Name << std::endl;
	std::cout << "Hit points are: " << this->hitPts << std::endl;
	std::cout << "Energy points are: " << this->energyPts << std::endl;
	std::cout << "Attack damage are: " << this->attackDmg << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->energyPts >= 1 && this->hitPts >= 1) {
		std::cout << "ClapTrap " << this->Name << "has attacked " << target << ", causing " << this->attackDmg << " points of damage!" << std::endl;
		this->energyPts--;
	}
	else if (this->energyPts <= 0)
		std::cout << "ClapTrap " << this->Name << "can't attack " << target << " because it has no energy!" << std::endl;
	else
		std::cout << "ClapTrap " << this->Name << "can't attack " << target << " beacause it has no hit Points left" << std::endl;
}

void	ClapTrap::takeDamage (unsigned int amount) {
	if (this->hitPts > 0) {
		std::cout << "ClapTrap " << this->Name << " was attacked, losing " << amount << std::endl;
		if (this->hitPts > amount)
			this->hitPts -= amount;
		else
			this->hitPts = 0;
	}
	else
		std::cout << "No damage was done, as " << this->Name << " was already dead!" << std::endl;
}

void	beRepaired (unsigned int amount) {
	if (this->hitPts >= 1 && this->energyPts >= 1) {
		std::cout << "ClapTrap " << this->Name << " is repaired " << amount << "hit points" << std::endl;
		if (amount > energyPts) {
			this->hitPts += this->energyPts;
			this->energyPts = 0;
		}
		else {
			this->hitPts += amount;
			this->energyPts -= amount;
		}
	}
	else if (this->hitPts < 1)
		std::cout << "ClapTrap" << this->Name << " cannot be repaired as it is dead";
	else
		std::cout << "ClapTrap" << this->Name << " cannot be repaired as it has no energy";
}

int main(void)
{
	ClapTrap clap ( "Alfredo" );

	for (int i = 0; i < 12; i++)
		clap.attack( "Gervázio" );
	clap.getAttributes();
	return (0);
}
