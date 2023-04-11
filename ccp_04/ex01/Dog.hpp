#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;

	public:
		Dog(void);
		Dog(const Dog& origin);
		~Dog(void);
		Dog& operator=(const Dog& origin);
		void makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif
