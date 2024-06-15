#include "../includes/scavTrap.hpp"

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {
    std::cout << "scavTrap " << this->getName() << " created" << std::endl;
    // std::cout << "scavTrap constructor called" << std::endl;
    this->setHitPts(100);
    this->setEnergyPts(50);
    this->setAttackDmg(20);
}

ScavTrap::~ScavTrap (void) {
    std::cout << "scavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->getEnergyPts() >= 1 && this->getHitPts() >= 1) {
		std::cout << "ScavTrap " << this->getName() << "has attacked " << target << ", causing " << this->getAttackDmg() << " points of damage!" << std::endl;
		this->setEnergyPts(this->getEnergyPts() - 1);
	}
	else if (this->getEnergyPts() <= 0)
		std::cout << "ScavTrap " << this->getName() << "can't attack " << target << " because it has no energy!" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << "can't attack " << target << " beacause it has no hit Points left" << std::endl;
}
