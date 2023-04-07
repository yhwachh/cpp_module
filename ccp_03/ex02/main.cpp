#include "ClapTrap.hpp"
#include "FragTrap.hpp"



int main(void)
{
    ClapTrap bot("ibra");
    FragTrap bot1("ibra_bis");

    bot.attack("player1");
    bot.takeDamage(2);
    bot.beRepaired(2);

    bot1.attack("player1");
    bot1.takeDamage(2);
    bot1.beRepaired(2);
    bot1.highFivesGuys();

}