#include "ClapTrap.hpp"
#include "ScavTrap.hpp"



int main(void)
{
    ClapTrap bot("ibra");
    ScavTrap bot1("ibra_bis");

    bot.attack("player1");
    bot.takeDamage(2);
    bot.beRepaired(2);

    bot1.attack("player1");
    bot1.takeDamage(2);
    bot1.beRepaired(2);
    bot1.guardGate();

}