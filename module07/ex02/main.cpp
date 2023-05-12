#include <iostream>
#include "Array.hpp"
#include <sstream>

int	main( void )
{
	std::cout << "Hello world!" << std::endl;

	Array<std::string> b(3);

	Array<std::string> b2( b );
	unsigned int i;
	for (i = 0; i < b2.size(); i++)
	{
		std::stringstream ss;
		ss << i;
		b2[i] = b2[i].append(ss.str());
	}

	// std::cout << "b[" << i << "] = " << b2[i] << std::endl;
	std::cout << b.size() << std::endl;

	Array<std::string> b3 = b2;
	
	b2[1] = "banana";
	
	for (i = 0; i < b2.size(); i++)
		std::cout << "b2[" << i << "] = " << b2[i] << std::endl;
	for (i = 0; i < b3.size(); i++)
		std::cout << "b3[" << i << "] = " << b3[i] << std::endl;

	Array<int> a(4);
	for (unsigned int j = 0; j < a.size(); j++)
		std::cout << a[j] << std::endl;
	return 0;
}