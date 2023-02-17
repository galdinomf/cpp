#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*my_zombie;

	my_zombie = newZombie("Moa");
	my_zombie->announce();
	randomChump("Leo");
	delete my_zombie;
	return (0);
}