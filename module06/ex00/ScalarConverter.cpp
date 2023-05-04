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

static void	display_result(char c, int n, float f, double d)
{
	double	integral;
	bool	has_frac_part = (modf(f, &integral) == 0);

	if ((c > 31) && (c < 126))
		std::cout << "char: \'" << c << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	std::cout << "int: " << n << std::endl;
	if (has_frac_part)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	if (has_frac_part)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

static void	process_float( std::string input )
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

static void	process_double( std::string input )
{
	if ((input.compare("nan") == 0) || (input.compare("+inf") == 0) || (input.compare("-inf") == 0))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
	}
	else
	{
		double d = std::strtod(input.c_str(), NULL);
		float f = static_cast<float>(d);
		char c = static_cast<char>(d);
		int n = static_cast<int>(d);
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
	else if ((input[input.length() - 1] == 'f') && \
			(input.compare("+inf") != 0) && (input.compare("-inf") != 0))
	{
		process_float(input);
		return ;
	}
	else if ((input.find('.') != std::string::npos) || (input.compare("nan") == 0) || \
				(input.compare("+inf") == 0) || (input.compare("-inf") == 0))
	{
		process_double(input);
		return ;
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