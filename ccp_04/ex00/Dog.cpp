#include "Dog.hpp"

/*
 * -------------------------- Constructor -----------------------------
 */

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& origin) : Animal(origin)
{
	this->type = origin.getType();
	std::cout << "Dog copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor -----------------------------
 */

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

Dog& Dog::operator=(const Dog& origin)
{
	if (this != &origin)
		this->type = origin.getType();
	return *this;
}

/*
 * -------------------------- Function -----------------------------
 */

void	Dog::makeSound(void) const
{
	std::cout << "Bowwow!" << std::endl;
}
