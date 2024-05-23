#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->index = 0;
}

PhoneBook::~PhoneBook(void) {

}

// decreases contacts index so it is printed in the same order
void	PhoneBook::reset_contacts(void) {
	int	i = 0;
	while (++i < 8)
		this->contacts[i - 1] = this->contacts[i];
	this->index--;
	return ;
}

void	PhoneBook::add_contact(void) {
	Contact		new_contact;
	std::string	input_str;
	// int			input_int;

	std::cout << "Please enter info:" << std::endl;
	// for first name
	std::cout << "Enter First Name:" << std::endl;
	std::getline(std::cin, input_str);
	new_contact.set_first_name(input_str);

	// for Last Name
	std::cout << "Enter Last Name:" << std::endl;
	std::getline(std::cin, input_str);
	new_contact.set_last_name(input_str);

	// for Nick Name
	std::cout << "Enter Nick Name:" << std::endl;
	std::getline(std::cin, input_str);
	new_contact.set_nick_name(input_str);

	// // for Number
	std::cout << "Enter Phone Number:" << std::endl;
	std::getline(std::cin, input_str);
	new_contact.set_phone(input_str);

	// for Darkest secret
	std::cout << "Enter Darkest Secret:" << std::endl;
	std::getline(std::cin, input_str);
	new_contact.set_darkest_secret(input_str);

	// print success message
	if (this->index == 8)
		this->reset_contacts();
	this->contacts[this->index] = new_contact;
	std::cout << "Contact added! " /* << this->contacts[this->index].get_first_name() */ << std::endl;
	this->index++;
}

void	PhoneBook::print_contacts(void) {
	int			i = -1;
	int			max;
	std::string	input;

	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|" << std::setw(11) << "index|" << std::setw(11) << "first name|" << std::setw(11) << "last name|" << std::setw(11) << "nick name|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	max = 0;
	if (this->index > 8)
		max = this->index - 8;
	while (++i + max < this->index) {
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_nick_name() << "|" << std::endl;
	}
	std::cout << " -------------------------------------------" << std::endl;
	// while (this->contacts[++i].get_first_name() != "") {
	// 	input = this->contacts[i].get_first_name();
	// 	std::cout << std::setw(10) << input << "|";
	// 	input = this->contacts[i].get_last_name();
	// 	std::cout << std::setw(10) << input << "|";
	// 	input = this->contacts[i].get_nick_name();
	// 	std::cout << std::setw(10) << input << "|";
	// 	input = this->contacts[i].get_phone();
	// 	std::cout << std::setw(10) << input << "|";
	// 	input = this->contacts[i].get_darkest_secret();
	// 	std::cout << std::setw(10) << input << std::endl;
	// }
}