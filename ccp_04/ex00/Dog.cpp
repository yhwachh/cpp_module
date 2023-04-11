#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "dog";
	std::cout << " dog constructor call " << std::endl;
}

Dog::Dog(const Dog& tp) : Animal(tp)
{
	this->type = tp.getType();
	std::cout << " dog copy constructor call" << std::endl;
}

Dog::~Dog()
{
	std::cout << " dog destructor call " << std::endl;
}

Dog& Dog::operator=(const Dog& tp)
{
	if (this != &tp)
		this->type = tp.getType();
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << " wouf " << std::endl;
}
