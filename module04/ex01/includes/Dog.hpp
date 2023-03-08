#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog & src );
		Dog& operator = ( const Dog & rhs);
		~Dog( void );
		
		Brain*	brain;

		void	makeSound( void ) const;

	private:
};

#endif