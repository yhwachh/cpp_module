#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal& tp);
		virtual ~Animal();
		Animal& operator=(const Animal& tp);
		virtual void makeSound(void) const;
		std::string	getType(void) const;
	
	protected:
		std::string type;
};

#endif

