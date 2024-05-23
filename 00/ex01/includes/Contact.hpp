#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>


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
		~Contact(void);
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






#endif
