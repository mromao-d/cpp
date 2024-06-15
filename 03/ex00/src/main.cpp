#include "../includes/clapTrap.hpp"

int main(void)
{
	ClapTrap clap ( "Alfredo" );

	for (int i = 0; i < 12; i++)
		clap.attack( "Gervázio" );
	clap.getAttributes();
	return (0);
}

