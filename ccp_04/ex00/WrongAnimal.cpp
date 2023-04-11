#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrong_animal")
{
	std::cout << " wrong animal constructor call " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin) : type(origin.getType())
{
	std::cout << " wrong animal copy constructor call " << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << " wrong animal destructor call " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin)
{
	if (this != &origin)
		this->type = origin.getType();
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
