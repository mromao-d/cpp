#include "../includes/Contact.hpp"

int	main(int argc, char *argv[])
{
	int	i = 1;
	int j = 0;

	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else {
		while (argv[i]) {
			j = 0;
			while (argv[i][j]) {
				std::cout << (char) toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
