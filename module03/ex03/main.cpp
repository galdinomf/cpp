#include <iostream>
#include <string>
#include "DiamondTrap.hpp"

int	main( void )
{
	//DiamondTrap	c1;
	DiamondTrap	c2("TrapC2");
	//DiamondTrap	c3( c1 );
	//DiamondTrap	c4;

	std::cout << "c2.getName() 	     = " << c2.getName() << std::endl;
	std::cout << "c2.getDiamondName()  = " << c2.getDiamondName() << std::endl;
	std::cout << "c2.gethitPoints()    = " << c2.getHitPoints() << std::endl;
	std::cout << "c2.getEnergyPoints() = " << c2.getEnergyPoints() << std::endl;
	std::cout << "c2.getAttackDamage() = " << c2.getAttackDamage() << std::endl;

	c2.attack("Unnamed");
	return 0;
}