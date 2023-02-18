#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class	HumanA
{
	public:
		HumanA( std::string, Weapon& );
		~HumanA( void );

		Weapon 		&weapon;
		std::string	name;

		void		attack();
};

#endif