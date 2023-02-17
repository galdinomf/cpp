#include <string>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie	*new_Zombie;

	new_Zombie = new Zombie;
	new_Zombie->set_name(name);
	return (new_Zombie);
}