#include "Cat.hpp"

Cat::Cat()
{
    std::cout << " cat constructor call " << std::endl;
}

Cat::~Cat()
{
    std::cout << " cat destructor call " << std::endl;
}

Cat::Cat(const Cat &tp)
{
    this->type = tp.type;
    std::cout << " cat copy constructor call " << std::endl;
}

Cat & Cat::operator=(Cat &tp)
{
    this->type = tp.type;
    std::cout << " cat operator call " << std::endl;
    return *this;
}

std::string Cat::gettype(void)
{
    return (this->type);
}

void Cat::makesound(void)
{
    std::cout << " Miaouuu " << std::endl;
}
