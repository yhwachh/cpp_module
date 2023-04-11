#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& origin);
		~WrongCat(void);
		WrongCat& operator=(const WrongCat& origin);
		void makeSound(void) const;
};

#endif
