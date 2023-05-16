#include <iostream>
#include "Span.hpp"

int	main( void )
{
	Span s(5);

	s.addNumber(0);
	s.addNumber(1);
	s.addNumber(2);
	s.addNumber(3);
	s.addNumber(4);
	// s.addNumber(5);
	s.displayNumbers();
	return 0;
}