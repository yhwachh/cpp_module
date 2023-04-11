#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
		
	public:
		Cat(void);
		Cat(const Cat& origin);
		~Cat(void);
		Cat& operator=(const Cat& origin);
		void makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif
