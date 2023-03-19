#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << "!DEBUG!" << "\n";
	std::cout << "I love having extra bacon" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "!INFO!" << "\n";
	std::cout << "I cannot believe adding extra bacon" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "!WARNING!" << "\n";
	std::cout << "I think I deserve to have some extra bacon" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "!ERROR!" << "\n";
	std::cout << "This is unacceptable" << std::endl;
}

std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void	Harl::complain(std::string level)
{
	void	(Harl::*fct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i = 0;

	while (i < 4)
	{
		if (level == levels[i])
			(this->*fct[i])();
		i++;
	}
}