#include <iostream>
#include "../includes/Form.hpp"

int	main( void )
{
	Form a;
	Form b(50, 100);
	Form c( b );
	Form d;

	d = b;
	
	std::cout << d << std::endl;

	return 0;
}