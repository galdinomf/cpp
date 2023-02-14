#include <iostream>
#include "Contact.hpp"

int	main(void)
{
	std::string	s;


	Contact c;
	c.set_first_name("moacir");
	c.set_last_name("galdino");
	c.set_nickname("galdinomf");
	c.set_phone_number("1234");
	c.set_darkest_secret("asdfsadfsadf");

	std::cout << c.get_first_name() << std::endl;
	std::cout << c.get_last_name() << std::endl;
	std::cout << c.get_nickname() << std::endl;
	std::cout << c.get_phone_number() << std::endl;
	std::cout << c.get_darkest_secret() << std::endl;
	std::cout << c.id << std::endl;

	// s = "";
	// while (s.compare("EXIT"))
	// {
	// 	std::cout << "> ";
	// 	getline(std::cin, s);
	// }
	return (0);
}