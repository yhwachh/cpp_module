#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog dog = Dog();
	Cat cat = Cat();

	dog.makeSound();
	cat.makeSound();

	return 0;
}
