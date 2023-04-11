#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout <<"======================================================" << std::endl;

	const WrongAnimal* f = new WrongCat();
	
	std::cout << f->getType() << " " << std::endl;
	f->makeSound();

	delete meta;
	delete i;
	delete j;
	delete f;
	return 0;
}
