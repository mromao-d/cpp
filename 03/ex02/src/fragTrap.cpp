#include "../includes/fragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << this->getName() << " contructor called!" << std::endl;
	this->setHitPts(100);
	this->setEnergyPts(100);
	this->setAttackDmg(30);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << this->getName() << " destructor called!" << std::endl;
}

void FragTrap::highFivesGuys (void) {
	std::cout << this->getName() << " high fives you" << std::endl;
}
