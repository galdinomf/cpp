#include <iostream>
#include "Harl.hpp"

int	main( void )
{
	Harl	h;

	std::cout << " ------------ debug ------------ " << std::endl;
	h.complain("DEBUG");
	std::cout << " ------------ info ------------- " << std::endl;
	h.complain("INFO");
	std::cout << " ------------ warning ---------- " << std::endl;
	h.complain("WARNING");
	std::cout << " ------------ error ------------ " << std::endl;
	h.complain("ERROR");
	std::cout << "Hello world!" << std::endl;
	return 0;
}