#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrong_animal")
{
	std::cout << " wrong animal constructor call " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& tp) : type(tp.getType())
{
	std::cout << " wrong animal copy constructor call " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << " wrong animal destructor call " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& tp)
{
	if (this != &tp)
		this->type = tp.getType();
	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << " wrong animal instance " << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}
