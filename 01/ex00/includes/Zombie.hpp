#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	anouce(void);
		void	randomChump(std::string name);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
