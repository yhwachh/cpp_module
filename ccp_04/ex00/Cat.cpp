#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "cat";
	std::cout << " cat constructor call " << std::endl;
}

Cat::Cat(const Cat& tp) : Animal(tp)
{
	this->type = tp.getType();
	std::cout << " cat copy constructor call " << std::endl;
}

Cat::~Cat()
{
	std::cout << " cat destructor call" << std::endl;
}

Cat& Cat::operator=(const Cat& tp)
{
	if (this != &tp)
		this->type = tp.getType();
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << " miou " << std::endl;
}
