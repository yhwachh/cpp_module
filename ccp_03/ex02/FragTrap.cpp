#include "FragTrap.hpp"

//==============CONSTRUCTOR==========================
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << " FRAGTRAP Default constructor called " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 10;
	_AttackDamage = 30;
	std::cout << " FragTrap constructor init called " << name << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << " FRAGTRAP copy constructor called" << std::endl;
	*this = src;	
}

FragTrap::~FragTrap()
{
	std::cout << " FRAGTRAP Default Destructor called " << std::endl;
}

//===============OPERATOR===========================

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	_name = src._name;
	_HitPoints = src._HitPoints;
	_EnergyPoints = src._EnergyPoints;
	_AttackDamage = src._AttackDamage;
	return *this;
}
 
//======================================================

void FragTrap:: highFivesGuys(void)
{
	std::cout << _name << " HIGH FIVES " << std::endl;
}