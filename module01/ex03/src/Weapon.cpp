#include <string>
#include "../includes/Weapon.hpp"

Weapon::Weapon( std::string weapon_type ) : _type(weapon_type)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

std::string const &	Weapon::getType( void ) const
{
	return this->_type;
}

void	Weapon::setType( std::string new_type )
{
	this->_type = new_type;
}