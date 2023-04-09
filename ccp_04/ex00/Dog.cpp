#include "Dog.hpp"

Dog::Dog()
{
    std::cout << " dog constructor call " << std::endl;
}

Dog::~Dog()
{
    std::cout << " dog destructor call " << std::endl;
}

Dog::Dog(Dog const &src)
{
    this->type = src.type;
    std::cout << " copy constructor dog call " << std::endl;
}

Dog & Dog::operator=(Dog const &src)
{
    std::cout << " dog operator call " << std::endl;
    this->type = src.type;
    return *this;
}

std::string Dog::gettype(void)
{
    return(this->type);
}

void Dog::makesound(void)
{
    std::cout << " wouf " << std::endl; 
}
