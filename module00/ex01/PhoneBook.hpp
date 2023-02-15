#ifndef PHONE_BOOK
# define PHONE_BOOK

# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		Contact	contacts[8];
		int		count;

		void	add_contact(int ind);
		void	display_contacts_list(void);
		void	search_contact(void);
};

#endif