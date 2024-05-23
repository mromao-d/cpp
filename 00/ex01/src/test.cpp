#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_nmbr;
		std::string	darkest_secret;

	public:
		Contact(void);
		// ~Contact(void);
		void		set_first_name(std::string f_name);
		std::string	get_first_name(void);
		void		set_last_name(std::string last_name);
		std::string	get_last_name(void);
		void		set_nick_name(std::string nick_name);
		std::string	get_nick_name(void);
		void		set_phone(std::string phone);
		std::string	get_phone(void);
		void		set_darkest_secret(std::string secret);
		std::string	get_darkest_secret(void);
};

Contact::Contact(void) {

}

Contact::~Contact(void) {

}

void	Contact::set_first_name(std::string f_name) {
	this->first_name = f_name;
}

std::string	Contact::get_first_name(void) {
	if (this->first_name.length() > 10)
		return (this->first_name.substr(0, 9) + '.');
	return(this->first_name.substr(0, 10));
}

void	Contact::set_last_name(std::string last_name) {
	this->last_name = last_name;
}

std::string	Contact::get_last_name(void) {
	if (this->last_name.length() > 10)
		return (this->last_name.substr(0, 9) + '.');
	return(this->last_name.substr(0, 10));
}

void	Contact::set_nick_name(std::string nick_name) {
	this->nick_name = nick_name;
}

std::string	Contact::get_nick_name(void) {
	if (this->nick_name.length() > 10)
		return (this->nick_name.substr(0, 9) + '.');
	return(this->nick_name.substr(0, 10));
}

void	Contact::set_phone(std::string phone) {
	this->phone_nmbr = phone;
}

std::string	Contact::get_phone(void) {
	if (this->phone_nmbr.length() > 10)
		return (this->phone_nmbr.substr(0, 9) + '.');
	return(this->phone_nmbr.substr(0, 10));
}

void	Contact::set_darkest_secret(std::string secret) {
	this->darkest_secret = secret;
}

std::string	Contact::get_darkest_secret(void) {
	if (this->darkest_secret.length() > 10)
		return (this->darkest_secret.substr(0, 9) + '.');
	return(this->darkest_secret.substr(0, 10));
}

class PhoneBook
{
	private:
		int		index;
		Contact	contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add_contact(void);
		void	print_contacts(void);
		void	reset_contacts(void);
};

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
	// // for first name
	// std::cout << "Enter First Name:" << std::endl;
	// std::getline(std::cin, input_str);
	// new_contact.set_first_name(input_str);

	// // for Last Name
	// std::cout << "Enter Last Name:" << std::endl;
	// std::getline(std::cin, input_str);
	// new_contact.set_last_name(input_str);

	// for Nick Name
	std::cout << "Enter Nick Name:" << std::endl;
	std::getline(std::cin, input_str);
	new_contact.set_nick_name(input_str);

	// // for Number
	// std::cout << "Enter Phone Number:" << std::endl;
	// std::getline(std::cin, input_str);
	// new_contact.set_phone(input_str);

	// // for Darkest secret
	// std::cout << "Enter Darkest Secret:" << std::endl;
	// std::getline(std::cin, input_str);
	// new_contact.set_darkest_secret(input_str);

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
	// 	std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
	// 	std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
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
