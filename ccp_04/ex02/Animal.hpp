#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(const Animal& origin);
		virtual ~Animal(void);
		Animal& operator=(const Animal& origin);
		virtual void makeSound(void) const = 0;
		std::string	getType(void) const;
};

#endif
