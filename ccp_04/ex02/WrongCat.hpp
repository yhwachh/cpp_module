#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& tp);
		~WrongCat();
		WrongCat& operator=(const WrongCat& tp);
		void makeSound(void) const;
};

#endif
