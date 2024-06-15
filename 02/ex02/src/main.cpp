#include "../includes/Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed const b ( Fixed( 5.05f ) * Fixed( 2 ));
	Fixed const c ( b / Fixed( 2 ));

	std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << --a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << b << std::endl;
	return (0);
}
