#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& origin);
		~WrongCat();
		WrongCat& operator=(const WrongCat& origin);
		void makeSound(void) const;
};

#endif
