#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *meta = new Animal;
    Animal *d = new Dog;
    Animal *c = new Cat;
    std::cout << d->gettype() << " " << std::endl;
	std::cout << c->gettype() << " " << std::endl;
	d->makesound(); //will output the dog sound!
	c->makesound();
	meta->makesound();
	delete meta;
	delete d;
	delete c;

    std::cout << "===================================" << std::endl;
	std::cout << std::endl << "Test with Wrong Class" << std::endl;
	 std::cout << "===================================" << std::endl;
    WrongAnimal* Wanimal = new WrongAnimal();
	WrongAnimal* Wcat = new WrongCat();
	std::cout << Wanimal->gettype() << std::endl;
	std::cout << Wcat->gettype() << std::endl;
	Wanimal->makesound();
	Wcat->makesound();
	delete Wanimal;
	delete Wcat;

	return 0;
}