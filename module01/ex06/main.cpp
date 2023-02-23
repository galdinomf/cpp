#include <iostream>
#include "Harl.hpp"

int	main( int argc, char *argv[] )
{
	Harl		h;
	int			level;
	std::string	s;

	if (argc != 2)
		return 1;
	level = -1;
	s = argv[1];
	if (s == "DEBUG")
		level = 0;
	if (s == "INFO")
		level = 1;
	if (s == "WARNING")
		level = 2;
	if (s == "ERROR")
		level = 3;
	h.complain(level);
	return 0;
}