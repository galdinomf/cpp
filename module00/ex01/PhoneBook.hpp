#ifndef PHONE_BOOK
# define PHONE_BOOK

# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		Contact	contacts[8];

		void	add_contact(void);
		void	search_contact(void);
};

#endif