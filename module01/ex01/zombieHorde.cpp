#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde;
	int		i;

	horde = new Zombie[N];
	i = -1;
	while (++i < N)
		horde[i].set_name(name);
	return horde;
}