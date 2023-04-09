#ifndef DOG_HPP
    #define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const & tp);
        virtual ~Dog();
        Dog &operator=(Dog const & tp);
        std::string gettype(void);
        virtual void makesound (void);
};

#endif