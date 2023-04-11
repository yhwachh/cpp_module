#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& tp);
		~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal& tp);
		void makeSound() const;
		std::string	getType(void) const;

	protected:
		std::string type;

};

#endif
