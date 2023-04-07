#ifndef SCAVTRAPS_HPP
#define SCAVTRAPS_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();

		ScavTrap &operator=(ScavTrap const &src);
		void guardGate();
};

#endif