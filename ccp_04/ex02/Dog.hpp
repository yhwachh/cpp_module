#ifndef DOG_HPP
    #define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const & tp);
        virtual ~Dog();
        Dog &operator=(Dog const & tp);
        std::string gettype(void);
        virtual void makesound (void);

    private:
        Brain* brain;
};

#endif