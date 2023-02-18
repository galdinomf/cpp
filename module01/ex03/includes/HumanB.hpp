#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB( std::string );
		~HumanB( void );

		Weapon*		weapon;
		std::string	name;

		void		attack();
		void		setWeapon( Weapon& );
};

#endif