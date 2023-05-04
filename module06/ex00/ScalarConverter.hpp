#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
//todos os construtores devem ser privados, e todos os atributos e métodos devem ser estáticos
//assim, simula-se uma classe estática (que não existe em c++98)

# include <string>
# include <iostream>
# include <cstdlib>
# include <cmath>

class ScalarConverter
{
	public:
		static void	convert( std::string input );

	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter & src );
		ScalarConverter& operator = ( const ScalarConverter & rhs);
		~ScalarConverter( void );
};

#endif
