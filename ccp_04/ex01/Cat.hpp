#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& tp);
		~Cat();
		Cat& operator=(const Cat& tp);
		void makeSound(void) const;
		Brain*	getBrain(void) const;
	
	private:
		Brain* brain;
		
};

#endif
