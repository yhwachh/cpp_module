#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& tp);
		~Dog();
		Dog& operator=(const Dog& tp);
		void makeSound(void) const;
};

#endif
