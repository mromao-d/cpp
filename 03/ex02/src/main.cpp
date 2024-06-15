#include "../includes/clapTrap.hpp"
#include "../includes/scavTrap.hpp"
#include "../includes/fragTrap.hpp"

int main(void)
{
	// ClapTrap clap ( "Alfredo" );
	// ScavTrap clap ( "Alfredo" );
	FragTrap clap ( "Alfredo" );

	for (int i = 0; i < 12; i++)
		clap.attack( "Gervázio" );
	clap.getAttributes();
	clap.highFivesGuys();
	return (0);
}

