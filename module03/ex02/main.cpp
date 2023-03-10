#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	c1;
	FragTrap	c2("TrapC2");
	FragTrap	c3( c1 );
	FragTrap	c4;

	c2.highFivesGuys();
	std::cout << "c2.getName() 	     = " << c2.getName() << std::endl;
	std::cout << "c2.gethitPoints()    = " << c2.getHitPoints() << std::endl;
	std::cout << "c2.getEnergyPoints() = " << c2.getEnergyPoints() << std::endl;
	std::cout << "c2.getAttackDamage() = " << c2.getAttackDamage() << std::endl;
	c2.attack("Unnamed");
	return 0;
}