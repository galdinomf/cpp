#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	std::cout << "ScalarConverter default constructor called." << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
	std::cout << "ScalarConverter copy constructor called." << std::endl;
	*this = src;
}

ScalarConverter&	ScalarConverter::operator = ( const ScalarConverter & rhs )
{
	std::cout << "ScalarConverter copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

ScalarConverter::~ScalarConverter( void )
{
	std::cout << "ScalarConverter destructor called." << std::endl;
}

void	display_result(char c, int n, float f, double d)
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << f << std::fixed << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	process_float( std::string input )
{
	if ((input.compare("nanf") == 0) || (input.compare("+inff") == 0) || (input.compare("-inff") == 0))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << std::endl;
		std::cout << "double: " << input.substr(0, input.length() - 1) << std::endl;
	}
	else
	{
		float f = atof(input.c_str());
		char c = static_cast<char>(f);
		int n = static_cast<int>(f);
		double d = f;
		display_result(c, n, f, d);
	}
}

void	ScalarConverter::convert( std::string input )
{
	char	c = 0;
	int		n = 0;
	float	f = 0.0f;
	double	d = 0;
	
	if (input[0] == '\'')
	{
		c = input[1];
		n = input[1];
		f = input[1];
		d = input[1];
	}
	else if (input[input.length() - 1] == 'f')
	{
		process_float(input);
		return ;
	}
	else if (input.find('.') != std::string::npos)
	{
		//input é double
	}
	else
	{
		n = atoi(input.c_str());
		c = n;
		f = n;
		d = n;
	}
	display_result(c, n, f, d);	
}