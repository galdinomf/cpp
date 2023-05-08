#include <iostream>
#include "header.h"

int	main( void )
{
	Base* base_ptr = generate();
	std::cout << "identify()'s output receiving pointer: ";
	base_ptr->identify(base_ptr);

	std::cout << "identify()'s output receiving reference: ";
	base_ptr->identify(*base_ptr);

	delete base_ptr;
	return 0;
}