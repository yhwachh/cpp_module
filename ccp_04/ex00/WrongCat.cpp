#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << " wrong cat constructor call " << std::endl;
}

WrongCat::WrongCat(const WrongCat &tp)
{
    this->type = tp.type;
    std::cout << " wrong cat copy constructor call " << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << " wrong cat destructor call " << std::endl;
}

WrongCat & WrongCat:: operator=(WrongCat &tp)
{
    this->type = tp.type;
    std::cout << " wrong cat operator call " << std::endl;
    return *this;
}

std::string WrongCat::gettype(void)
{
    return (this->type);
}

void WrongCat::makesound(void)
{
    std::cout << " miou " << std::endl;
}
