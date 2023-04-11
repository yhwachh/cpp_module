#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	
	std::cout << "===========================================" << std::endl;

	const int	size = 6;
	
	Animal*	arg[size];
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			arg[i] = new Dog();
		else
			arg[i] = new Cat();
	}
	for (int i = 0; i < size; i++)
		delete arg[i];

	return 0;
}
