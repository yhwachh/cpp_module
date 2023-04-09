#ifndef WRONGCAT_HPP
    #define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat & tp);
        ~WrongCat();
        WrongCat &operator=(WrongCat & tp);
        std::string gettype(void);
        void makesound(void);

};

#endif