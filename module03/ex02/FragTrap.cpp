#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap default constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "FragTrap name constructor called." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator = ( const FragTrap & rhs )
{
	std::cout << "FragTrap copy assignment called." << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
		std::cout << " FragTrap " << _name << " attacks " << target << " causing " << _attackDamage \
				<< " points of damage!" << std::endl;
		this->_energyPoints -= 1;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->_name << " requests a positive high fives." << std::endl;
}