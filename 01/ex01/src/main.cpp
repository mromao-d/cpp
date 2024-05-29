#include "../includes/Zombie.hpp"

int	main(void)
{
	std::string	nb_string;
	int			nb;
	int			i = -1;

	std::cout << "How many zombies should I create?" << std::endl;
	std::getline(std::cin, nb_string);
	nb = std::atoi(nb_string.c_str());
	Zombie*	zombie[nb];
	while (++i < nb) {
		std::cout << "zombie number  " << i+1 << "  ";
		zombie[i] = newZombie("stack_zombie");
	}
	i = -1;
	while (++i < nb)
		delete zombie[i];
	return (0);
}
