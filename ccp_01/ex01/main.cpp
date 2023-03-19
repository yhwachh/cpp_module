#include "Zombie.hpp"



int main(void)
{
    int i = 0;
    Zombie* Z = zombieHorde(3, "Zombie");
    while(i < 3)
    {
        Z[i].announce();
        i++;
    }

    delete[] Z;

    return(0);
}