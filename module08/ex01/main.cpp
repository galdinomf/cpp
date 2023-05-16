#include <iostream>
#include "Span.hpp"

int	main( void )
{
	Span s(5);

	s.addNumber(10);
	s.addNumber(1);
	s.addNumber(2);
	s.addNumber(3);
	s.addNumber(4);
	s.addNumber(5);
	s.displayNumbers();
	std::cout << "longest span = " << s.longestSpan() << std::endl;
	std::cout << "shortest span = " << s.shortestSpan() << std::endl;
	return 0;
}