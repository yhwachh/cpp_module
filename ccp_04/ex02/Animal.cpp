#include "Animal.hpp"

/*
 * -------------------------- Constructor -----------------------------
 */

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& origin) : type(origin.getType())
{
	std::cout << "Animal copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor -----------------------------
 */

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

Animal& Animal::operator=(const Animal& origin)
{
	if (this != &origin)
		this->type = origin.getType();
	return *this;
}

/*
 * -------------------------- Function -----------------------------
 */

std::string	Animal::getType(void) const
{
	return this->type;
}
