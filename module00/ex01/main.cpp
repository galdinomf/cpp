#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	s;
	PhoneBook	book;

	while (s.compare("EXIT"))
	{
		std::cout << "> ";
		std::cin >> s;
		if (s.compare("ADD") == 0)
			book.add_contact(book.count % 8);
		if (s.compare("SEARCH") == 0)
			book.search_contact();
	}
	return (0);
}