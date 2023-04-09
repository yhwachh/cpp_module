#include "WrongAnimal.hpp"

WrongAnimal ::WrongAnimal()
{
    std::cout << " wrong animal constructor call " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << " wrong animal destructor call " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &tp)
{
    type = tp.type;
    std::cout << " wrong animal copy constrcutor call " << std::endl;
}

WrongAnimal & WrongAnimal :: operator=(WrongAnimal &tp)
{
    std::cout << " wrong animal operator call " << std::endl;
    this->type = tp.type;
    return *this;
}

std::string WrongAnimal:: gettype(void) const
{
    return(this->type);
}

void WrongAnimal::makesound(void)
{
    std::cout << " wrong animal OoO " << std::endl;
}
