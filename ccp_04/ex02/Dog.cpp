#include "Dog.hpp"

/*
 * -------------------------- Constructor -----------------------------
 */

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& origin) : Animal(origin)
{
	this->type = origin.getType();
	this->brain = new Brain();
	*this->brain = *origin.getBrain();
	std::cout << "Dog copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor -----------------------------
 */

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

/*
 * -------------------------- Operator -----------------------------
 */

Dog& Dog::operator=(const Dog& origin)
{
	if (this != &origin)
	{
		this->type = origin.getType();
		*this->brain = *origin.getBrain();
	}
	return *this;
}

/*
 * -------------------------- Function -----------------------------
 */

void	Dog::makeSound(void) const
{
	std::cout << "Bowwow!" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return this->brain;	
}
