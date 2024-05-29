#include "../includes/Weapon.hpp"

Weapon::Weapon(void) {
	;
}

Weapon::Weapon(std::string	weapon) {
	this->type = weapon;
}

Weapon::~Weapon(void) {
	;
}

void	Weapon::setType(std::string	type) {
	this->type = type;
}

std::string	const	&Weapon::getType(void) {
	return (this->type);
}
