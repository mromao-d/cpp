#include "../includes/HumanA.hpp"

// weapon declared in front because is a reference and needs to be constructed
//  error: uninitialized reference member in ‘class Weapon&’ [-fpermissive]
HumanA::HumanA(std::string	name, Weapon&	weapon) : WeaponA(weapon) {
	this->set_name(name);
}

HumanA::~HumanA(void) {
	;
}

void	HumanA::set_name(std::string	name) {
	this->name = name;
}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->WeaponA.getType() << std::endl;
}
