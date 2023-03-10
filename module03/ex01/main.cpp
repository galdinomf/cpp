#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	c1;
	ScavTrap	c2("TrapC2");
	ScavTrap	c3( c1 );
	ScavTrap	c4;

	c2.guardGate();
	std::cout << "c2.getName() 	      = " << c2.getName() << std::endl;
	std::cout << "c2.gethitPoints()    = " << c2.getHitPoints() << std::endl;
	std::cout << "c2.getEnergyPoints() = " << c2.getEnergyPoints() << std::endl;
	std::cout << "c2.getAttackDamage() = " << c2.getAttackDamage() << std::endl;
	c2.attack("Unnamed");
	return 0;
}