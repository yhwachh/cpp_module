#ifndef WRONGANIMAL_HPP
    #define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
        
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &tp);
        ~WrongAnimal();
        WrongAnimal & operator=(WrongAnimal &tp);
        void makesound(void);
        std::string gettype(void) const;
};
#endif