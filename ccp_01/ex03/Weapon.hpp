#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Weapon
{
    public:
        Weapon(std::string n_type);
        ~Weapon();

        std::string const& getType();
        void        setType(std::string type);

    private:
        std::string _type;

};

#endif