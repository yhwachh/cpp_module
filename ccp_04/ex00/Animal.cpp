#include "Animal.hpp"

Animal ::Animal()
{
    std::cout << " animal constructor call " << std::endl;
}

Animal::~Animal()
{
    std::cout << " animal destructor call " << std::endl;
}

Animal::Animal(const Animal &tp)
{
    type = tp.type;
    std::cout << " Copy animal constrcutor call " << std::endl;
}

Animal & Animal ::operator=(Animal &tp)
{
    std::cout << " animal operator call " << std::endl;
    this->type = tp.type;
    return *this;
}

std::string Animal:: gettype(void) const
{
    return(this->type);
}

void Animal::makesound(void)
{
    std::cout << " (\\__/)  " << std::endl;
    std::cout << " ( ='.'=) " << std::endl;
    std::cout << " ('')_('') " << std::endl;
}
