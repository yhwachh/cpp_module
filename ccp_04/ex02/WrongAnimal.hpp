#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& origin);
		~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal& origin);
		void makeSound(void) const;
		std::string	getType(void) const;
};

#endif
