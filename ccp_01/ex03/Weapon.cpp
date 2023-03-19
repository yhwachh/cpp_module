#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


Weapon::Weapon(std::string n_type)
{
    this->_type = n_type;
}

Weapon::~Weapon(){}

std::string const&	Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}






