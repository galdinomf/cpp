#include <iostream>
#include "Span.hpp"

int	main( void )
{
	Span s(10000);

	s.populateNumbers(10000);
	std::cout << "longest span = " << s.longestSpan() << std::endl;
	std::cout << "shortest span = " << s.shortestSpan() << std::endl;
	return 0;
}

// int	main( void )
// {
// 	Span s(1);

// 	try
// 	{
// 		s.addNumber(10);
// 		s.addNumber(1);
// 		s.addNumber(2);
// 		s.addNumber(3);
// 		s.addNumber(4);
// 		s.addNumber(5);
// 	}
// 	catch(std::out_of_range& e){std::cout << "Maximum size reached!" << std::endl;}
	
// 	std::cout << "Displaying numbers:" << std::endl;
// 	s.displayNumbers();
// 	std::cout << "Calculating spans:" << std::endl;
// 	try
// 	{
// 		int longestSpan = s.longestSpan();
// 		int shortestSpan = s.shortestSpan();
// 		std::cout << "longest span = " << longestSpan << std::endl;
// 		std::cout << "shortest span = " << shortestSpan << std::endl;
// 	}
// 	catch(std::out_of_range &e){std::cout << "Not enough numbers!" << std::endl;}
// 	return 0;
// }