#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "wrong_cat";
	std::cout << " wrong cat constructor call" << std::endl;
}

WrongCat::WrongCat(const WrongCat& tp) : WrongAnimal(tp)
{
	this->type = tp.getType();
	std::cout << " wrong cat copy constructor call " << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << " wrong cat destructor call " << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& tp)
{
	if (this != &tp)
		this->type = tp.getType();
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << " miou ? " << std::endl;
}
