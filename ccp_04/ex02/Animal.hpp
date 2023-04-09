#ifndef ANIMAL_HPP
    #define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(const Animal &tp);
        virtual ~Animal();
        Animal & operator=(Animal &tp);
        virtual void makesound(void) = 0;
        std::string gettype(void) const;


};


#endif
