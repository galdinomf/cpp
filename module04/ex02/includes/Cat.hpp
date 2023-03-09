#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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