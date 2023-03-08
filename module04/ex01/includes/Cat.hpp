#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat & src );
		Cat& operator = ( const Cat & rhs);
		~Cat( void );

		Brain*	brain;
	void	makeSound( void ) const;

	private:
};

#endif