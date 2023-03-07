#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap & rhs )
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::setName( const std::string & newName )
{
	this->_name = newName;
}

std::string ClapTrap::getName( void ) const
{
	return this->_name;
}

void	ClapTrap::setHitPoints( const int & newHP )
{
	this->_hitPoints = newHP;
}

int		ClapTrap::getHitPoints( void ) const
{
	return this->_hitPoints;
}

void	ClapTrap::setEnergyPoints( const int & newEP )
{
	this->_energyPoints = newEP;
}

int		ClapTrap::getEnergyPoints( void ) const
{
	return this->_energyPoints;
}

void	ClapTrap::setAttackDamage( const int & newAD )
{
	this->_attackDamage = newAD;
}

int		ClapTrap::getAttackDamage( void ) const
{
	return this->_attackDamage;
}

void	ClapTrap::attack(const std::string& target)
{
		std::cout << " ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage \
				<< " points of damage!" << std::endl;
		this->_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << " ClapTrap " << _name << " lost " << amount << " points of health." << std::endl;
	this->_hitPoints -= amount;
}

void 	ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->_energyPoints > 0) && (this->_hitPoints > 0))
	{
		std::cout << " ClapTrap " << _name << " recovered  " << amount << " points of health." << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
	else
		std::cout << " ClapTrap " << _name << " has not enough points to be repaired. " << std::endl;
}

void	ClapTrap::attackAndDamage( ClapTrap * target )
{
	if ((this->getEnergyPoints() > 0) && (this->getHitPoints() > 0))
	{
		this->attack(target->getName());
		target->takeDamage(this->getAttackDamage());
	}
	else
		std::cout << " ClapTrap " << _name << " has not enough points to attack. " << std::endl;

}
