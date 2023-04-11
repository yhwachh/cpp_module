#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat& origin);
		~Cat(void);
		Cat& operator=(const Cat& origin);
		void makeSound(void) const;
};

#endif
