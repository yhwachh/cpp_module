#include "ClapTrap.hpp"



int main(void)
{
    ClapTrap bot("ibra");

    bot.attack("player1");
    bot.takeDamage(2);
    bot.beRepaired(2);
    bot.attack("player2");
    bot.takeDamage(5);
    bot.beRepaired(3);
    bot.attack("player3");
    bot.takeDamage(7);
    bot.beRepaired(10);
    bot.attack("player4");
    bot.takeDamage(11);
    bot.beRepaired(1);

}