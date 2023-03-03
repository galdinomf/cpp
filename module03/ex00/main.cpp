#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	c1;
	ClapTrap	c2("TrapC2");
	ClapTrap	c3( c1 );
	ClapTrap	c4;
	int 		i;

	c4 = c1;

	c1.setAttackDamage(1);
	c3.setAttackDamage(1);
	
	std::string s = "TrapC3";
	c3.setName(s);

	std::cout << " ------------------- Unnamed gets rekt ------------------- " << std::endl;
	for (i = -1; i < 8; i++)
	{
		c3.attackAndDamage(&c1);
	}
	std::cout << " --------- Unnamed recovers and gets its revenge --------- " << std::endl;
	c1.beRepaired(5);
	for (i = 0; i < 10; i++)
	{
		c1.attackAndDamage(&c3);
	}

	return 0;
}