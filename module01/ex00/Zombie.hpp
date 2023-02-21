#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie( std::string );
		~Zombie(void);
		std::string s;

		void	announce( void );
		void	set_name( std::string );
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif