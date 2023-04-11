#include "Cat.hpp"

/*
 * -------------------------- Constructor -----------------------------
 */

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& origin) : Animal(origin)
{
	this->type = origin.getType();
	std::cout << "Cat copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor -----------------------------
 */

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

Cat& Cat::operator=(const Cat& origin)
{
	if (this != &origin)
		this->type = origin.getType();
	return *this;
}

/*
 * -------------------------- Function -----------------------------
 */

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}
