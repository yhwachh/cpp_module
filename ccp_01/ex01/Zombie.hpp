#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Zombie
{
    public:
        Zombie();
        ~Zombie();


        void announce(void);
        void    name(std::string name);

    private:
        std::string _name;


};

Zombie* zombieHorde( int N, std::string name );


#endif