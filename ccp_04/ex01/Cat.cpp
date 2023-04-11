#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << " cat constructor call " << std::endl;
	this->type = "cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& tp) : Animal(tp)
{
	std::cout << " cat copy constructor call " << std::endl;
	this->type = tp.getType();
	this->brain = new Brain();
	*this->brain = *tp.getBrain();
}

Cat::~Cat()
{
	std::cout << " cat destructor call " << std::endl;
	delete this->brain;
}

Cat& Cat::operator=(const Cat& tp)
{
	if (this != &tp)
	{
		this->type = tp.getType();
		*this->brain = *tp.getBrain();
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << " miou " << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return this->brain;	
}
