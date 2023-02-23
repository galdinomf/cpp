#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombieArray;
	Zombie	*p1;
	int		i;
	int		N;

	N = 5;
	zombieArray = zombieHorde(N, "Moa");

	p1 = &zombieArray[0];

	std::cout << "zombieArray =     " << zombieArray << std::endl;
	std::cout << "&zombieArray[0] = " << p1 << std::endl;

	i = -1;
	while (++i < N)
		zombieArray[i].announce();
	delete[] zombieArray;
	return (0);
}