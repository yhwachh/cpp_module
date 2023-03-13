#include "Zombie.hpp"



int main(int ac, char **av)
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