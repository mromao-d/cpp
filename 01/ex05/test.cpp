#include <iostream>
// #include <string>
#include <cstdlib>

class Zombie
{
	private:
		std::string	name;
	public:
		// Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		// *newZombie(std::string name);
		void	anouce(void);
		void	randomChump(std::string name);
};

// Zombie::Zombie(void) {
// 	;
// }

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << this->name << " destroyed" << std::endl;
}

// new allocates on the heap
Zombie	*newZombie(std::string name) {
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	new_zombie->anouce();
	return (new_zombie);
}

void	Zombie::anouce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	randomChump(std::string name) {
	Zombie	new_zombie(name);
	new_zombie.anouce();
}

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(void);
		Weapon(std::string	weapon);
		~Weapon(void);
		void	setType(std::string	weapon);
		std::string	const	&getType(void);
};

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

class HumanA
{
	private:
		std::string	name;
		Weapon&		WeaponA;
	public:
		HumanA(std::string	name, Weapon&	weapon);
		~HumanA(void);

		void	set_name(std::string	name);
		void	attack(void);
};

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

class	HumanB
{
	private:
		std::string	name;
		Weapon		*WeaponB;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon *weapon);
		// void	setWeapon(Weapon& weapon);
		void	attack(void);
};

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

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spike club");
		HumanB jim("Jim");
		jim.setWeapon(&club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
