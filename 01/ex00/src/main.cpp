#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie*	zombie;

	zombie = newZombie("stack_zombie");
	delete zombie;
	randomChump("heap_zombie");
	return (0);
}