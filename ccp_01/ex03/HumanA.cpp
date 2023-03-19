#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):_name(name),_weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << this->_name << " att avec :" << this->_weapon.getType() << std::endl;
}





