#include "Animal.hpp"

Animal::Animal() : type("animal")
{
	std::cout << " animal constructor call " << std::endl;
}

Animal::Animal(const Animal& tp) : type(tp.getType())
{
	std::cout << " animal copy constructor call " << std::endl;
}

Animal::~Animal()
{
	std::cout << " animal destructor call " << std::endl;
}

Animal& Animal::operator=(const Animal& tp)
{
	if (this != &tp)
		this->type = tp.getType();
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->type;
}
