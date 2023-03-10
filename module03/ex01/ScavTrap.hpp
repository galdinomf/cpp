#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap & );
		ScavTrap & operator = (const ScavTrap &);
		~ScavTrap( void );

		void 	attack(const std::string& target);
		void	guardGate( void );
};