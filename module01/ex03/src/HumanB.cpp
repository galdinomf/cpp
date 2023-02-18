#include "../includes/HumanB.hpp"
#include <string>

HumanB::HumanB( std::string name )
{
	this->name = name;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::attack( void )
{
	if (this->weapon == NULL)
		std::cout << this->name << " is disarmed." << std::endl;
	else		
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon_taken )
{
	this->weapon = &weapon_taken;
}