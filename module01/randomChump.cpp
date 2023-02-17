#include <string>
#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	random;

	random.set_name(name);
	random.announce();
}