#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
	
	if (this->_weapon == NULL)
		std::cout << this->_name << " head jab " << std::endl;
	else
		std::cout << this->_name << " att avec :" << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon; 
}