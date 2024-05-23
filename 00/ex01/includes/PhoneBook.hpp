#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <iomanip>
# include "Contact.hpp"


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


# endif
