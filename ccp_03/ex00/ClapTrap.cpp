#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructeur call" << std::endl;
    this->_name = name;
    this->_EnergyPoints = 10;
    this->_HitPoints = 10;
    this->_AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructeur call" << std::endl;
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



