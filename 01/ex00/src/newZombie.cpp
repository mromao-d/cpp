#include "../includes/Zombie.hpp"

// new allocates on the heap
Zombie	*newZombie(std::string name) {
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	new_zombie->anouce();
	return (new_zombie);
}
