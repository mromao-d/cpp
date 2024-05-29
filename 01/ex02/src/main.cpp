#include "../includes/Zombie.hpp"

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "string address is: " << &str << std::endl;
	std::cout  << "string pointer is: " << stringPTR << std::endl;
	std::cout  << "string ref is: " << &stringREF << std::endl;

	std::cout << "string value is: " << str << std::endl;
	std::cout  << "string value is: " << *stringPTR << std::endl;
	std::cout  << "string value is: " << stringREF << std::endl;
	return (0);
}
