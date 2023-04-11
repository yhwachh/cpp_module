#include "WrongAnimal.hpp"

/*
 * -------------------------- Constructor -----------------------------
 */

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin) : type(origin.getType())
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor -----------------------------
 */

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin)
{
	if (this != &origin)
		this->type = origin.getType();
	return *this;
}

/*
 * -------------------------- Function -----------------------------
 */

void	WrongAnimal::makeSound(void) const
{
	std::cout << "This instance is WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}
