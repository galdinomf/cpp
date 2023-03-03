#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name )
{
	std::cout << "ScavTrap name constructor called." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator = ( const ScavTrap & rhs )
{
	std::cout << "ScavTrap copy assignment called." << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode." << std::endl;
}