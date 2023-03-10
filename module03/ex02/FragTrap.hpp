#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap & );
		FragTrap & operator = (const FragTrap &);
		~FragTrap( void );

		void 	attack(const std::string& target);
		void	highFivesGuys(void);
};