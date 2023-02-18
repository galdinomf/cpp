#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie( void );
		Zombie( std::string );
		~Zombie(void);
		std::string s;

		void	announce( void );
		void	set_name( std::string );
};

Zombie* zombieHorde( int N, std::string name );

#endif