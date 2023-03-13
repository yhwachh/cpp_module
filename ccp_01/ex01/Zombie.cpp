#include "Zombie.hpp"

Zombie::Zombie(){}

void Zombie::name(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << " is dead" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
