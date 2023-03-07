#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void )
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( std::string name )
{
	std::cout << "DiamondTrap name constructor called." << std::endl;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = src;
}

DiamondTrap & DiamondTrap::operator = ( const DiamondTrap & rhs )
{
	std::cout << "DiamondTrap copy assignment called." << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	//std::cout << "ClapTrap name: " << this->ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

std::string	DiamondTrap::getDiamondName( void )
{
	return this->_name;
}