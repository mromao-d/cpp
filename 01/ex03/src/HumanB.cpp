#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::~HumanB(void) {
	;
}

void	HumanB::setWeapon(Weapon *weapon) {
// void	HumanB::setWeapon(Weapon& weapon) {
	this->WeaponB = weapon;
	// this->WeaponB = &weapon;
}

void	HumanB::attack(void) {
	std::cout << this->name << " attacks with their " << this->WeaponB->getType() << std::endl;
}
