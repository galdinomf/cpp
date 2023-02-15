#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	s;
	PhoneBook	book;


	// Contact c;
	// c.set_first_name("moacir");
	// c.set_last_name("galdino");
	// c.set_nickname("galdinomf");
	// c.set_phone_number("1234");
	// c.set_darkest_secret("asdfsadfsadf");

	// std::cout << c.get_first_name() << std::endl;
	// std::cout << c.get_last_name() << std::endl;
	// std::cout << c.get_nickname() << std::endl;
	// std::cout << c.get_phone_number() << std::endl;
	// std::cout << c.get_darkest_secret() << std::endl;
	// std::cout << c.id << std::endl;

	s = "";
	while (s.compare("EXIT"))
	{
		std::cout << "> ";
		std::cin >> s;
		if (s.compare("ADD") == 0)
			book.add_contact(book.count % 8);
		if (s.compare("SEARCH") == 0)
			book.search_contact();
	}
	
	// s = "1234567890";
	// std::string s2 = s.substr(0, 10);
	// s2[9] = '.';
	// std::cout << s2 << std::endl;

	return (0);
}