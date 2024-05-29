#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

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
		// jim.setWeapon(&club);
		jim.attack();
		// club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
