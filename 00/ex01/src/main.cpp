#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

int main(void)
{
	PhoneBook 	phone;
	std::string	input_str;

	while (1) {
		std::cout << "Enter a command > ";
		std::getline (std::cin, input_str);
		if ((input_str == "EXIT") | (input_str == "exit")) {
			break;
		}
		else if ((input_str == "SEARCH") | (input_str == "search")) {
			phone.print_contacts();
		}
		else if ((input_str == "ADD") | (input_str == "add"))
			phone.add_contact();
		else if (input_str == "clear")
			std::cout << "\033[2J\033[1;1H";
		else {
			std::cout << "Wrong command!" << std::endl;
		}
	}
	return (0);
}
