#include "../includes/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon_taken ) : weapon(weapon_taken)
{
	this->name = name;
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}