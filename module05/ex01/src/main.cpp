#include <iostream>
#include "../includes/Form.hpp"

int	main( void )
{
	Form a;
	Form b("Moa", 50, 10);
	Form c( b );
	Form d;

	d = b;
	
	std::cout << " --------------------------------------- " << std::endl;
	std::cout << "Outstreaming a:" << std::endl;
	std::cout << a << std::endl;
	std::cout << "Outstreaming b:" << std::endl;
	std::cout << b << std::endl;
	std::cout << "Outstreaming c:" << std::endl;
	std::cout << c << std::endl;
	std::cout << "Outstreaming d:" << std::endl;
	std::cout << d << std::endl;
	std::cout << " --------------------------------------- " << std::endl;

	return 0;
}