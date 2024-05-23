#include "../includes/Contact.hpp"


// contructor (who cares)
Contact::Contact(void) {

}

// de-contructor (who cares)
Contact::~Contact(void) {

}

// set first name
void	Contact::set_first_name(std::string f_name) {
	this->first_name = f_name;
}

// returns 1st name
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
