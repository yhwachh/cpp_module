#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << " dog constructor call " << std::endl;
	this->type = "dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& tp) : Animal(tp)
{
	std::cout << " dog copy constructor call " << std::endl;
	this->type = tp.getType();
	this->brain = new Brain();
	*this->brain = *tp.getBrain();
}

Dog::~Dog()
{
	std::cout << " dog destructor call " << std::endl;
	delete this->brain;
}

Dog& Dog::operator=(const Dog& tp)
{
	if (this != &tp)
	{
		this->type = tp.getType();
		*this->brain = *tp.getBrain();
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << " Wouf " << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return this->brain;	
}
