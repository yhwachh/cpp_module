#include "Zombie.hpp"




int main()
{
	// Creation sur le tas
	Zombie* nZombie = newZombie("Zombie_1");
	nZombie->announce();
	delete nZombie;

	// Creation sur la pile
	randomChump("Zombie_2");
	return (0);
}