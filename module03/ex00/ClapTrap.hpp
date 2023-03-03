#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# include <string>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap & src );
		ClapTrap & operator=( const ClapTrap & rhs);
		~ClapTrap( void );

		void		 setName( const std::string & newName);
		std::string	 getName( void ) const;
		void		 setHitPoints( const int & newHP );
		int			 getHitPoints( void ) const;
		void		 setEnergyPoints( const int & newEP );
		int			 getEnergyPoints( void ) const;
		void		 setAttackDamage( const int & newEP );
		int			 getAttackDamage( void ) const;

		void 		 attack(const std::string& target);
		void		 takeDamage(unsigned int amount);
		void 		 beRepaired(unsigned int amount);

		void		 attackAndDamage( ClapTrap * target );
};

#endif