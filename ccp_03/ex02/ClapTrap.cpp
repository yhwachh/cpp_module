#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << " ClapTrap Default constructor "  << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << " ClapTrap constructor " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << " ClapTrap default Destructor " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << " ClapTrap copy constructor called" << std::endl;
	*this = src;
}
//======================Operateur d'assignation=============================

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	_name = src._name;
	_EnergyPoints = src._EnergyPoints;
	_AttackDamage = src._AttackDamage;
	_HitPoints = src._HitPoints;
	return *this;
}

void    ClapTrap::attack(const std::string &target)
{
    if(_EnergyPoints  && _HitPoints )
    {
        _EnergyPoints--;
        std::cout << _name << " att " << target << " take dmg: " << _AttackDamage << std::endl;
        std::cout << _name << " energy = " << _EnergyPoints << std::endl;
    }
    else
        std::cout << _name << " is tired" << std::endl;
}

void ClapTrap:: takeDamage(unsigned int amount)
{
    if (!_EnergyPoints || !_HitPoints)
        return ;
    (amount > _HitPoints) ? (_HitPoints = 0) : (_HitPoints = _HitPoints - amount);
	std::cout << _name << " take damage " << amount << ", hitpoints = " << _HitPoints << std::endl;
    if (_HitPoints <= 0)
    {
        _HitPoints = 0;
        std::cout << _name << " is dead --' " << std::endl;
    }
}

void ClapTrap:: beRepaired(unsigned int amount)
{
    if(_HitPoints && _EnergyPoints )
    {
	    _EnergyPoints--;
	    _HitPoints += amount;
	    std::cout << _name << "  be repaired  " << amount << ", hitpoints = : " << _HitPoints << std::endl;
	    std::cout << _name << " energy = " << _EnergyPoints << std::endl;
    }
    else
        std::cout << _name << " is tired" << std::endl;
}