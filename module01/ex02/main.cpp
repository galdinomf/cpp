#include <iostream>

int	main( void )
{
	std::string 	str;
	std::string* 	stringPTR = &str;
	std::string&	stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << "------ checking addresses ------" << std::endl;
	std::cout << "&str =       " << &str << std::endl;
	std::cout << "&stringREF = " << &stringREF << std::endl;
	std::cout << "stringPTR  = " << stringPTR << std::endl;
	std::cout << "------ checking values ------" << std::endl;
	std::cout << "str =        " << str << std::endl;
	std::cout << "stringREF  = " << stringREF << std::endl;
	std::cout << "*stringPTR = " << *stringPTR << std::endl;

	std::cout << "-----------" << std::endl;
	std::string str2 = "ola";

	std::cout << "Assinging pointer:" << std::endl;
	stringPTR = &str2;
	std::cout << "Value pointed to by pointer: " << *stringPTR << std::endl;
	std::cout << "str = " << str << std::endl;

	std::cout << "Assinging reference:" << std::endl;
	stringREF = str2;
	std::cout << "Value pointed to by reference: " << stringREF << std::endl;
	std::cout << "str = " << str << std::endl;

	return (0);
}