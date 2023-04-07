#include "ScavTrap.hpp"

//=================CONSTRUCTOR========================
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << " Scav Default Constructor called " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << " ScavTrap Constructor init called "  << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << " ScavTrap Destructor called " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << " ScavTrap copy constructor called" << std::endl;
	*this = src;
}
//===================Operateur d'assignation=================================

ScavTrap &ScavTrap ::operator=(ScavTrap const &src)
{
	_name = src._name;
	_HitPoints = src._HitPoints;
	_EnergyPoints = src._EnergyPoints;
	_AttackDamage = src._AttackDamage;
	return *this;
}


void ScavTrap::guardGate()
{
	std::cout << _name << " is in Mode Gate Keeper " << std::endl;
}