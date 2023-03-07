#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap , public FragTrap
{
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap & );
		DiamondTrap & operator = (const DiamondTrap &);
		~DiamondTrap( void );

		void 	attack(const std::string& target);
		void	whoAmI( void );
		std::string	getDiamondName( void );
	
	private:
		std::string	_name;
};