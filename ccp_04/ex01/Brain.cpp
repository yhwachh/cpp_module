#include "Brain.hpp"

Brain::Brain()
{
	std::cout << " brain constructor call " << std::endl;
}

Brain::~Brain()
{
	std::cout << " brain Destructor call " << std::endl;
}

Brain::Brain(const Brain &tp)
{
	for(int i = 0; i < 100; i++)
		Ideas[i] = tp.Ideas[i];
	std::cout << " brain copy constructor call " << std::endl;
}

Brain & Brain::operator=(const Brain &tp)
{
	for(int i = 0; i < 100; i++)
	this->Ideas[i] = tp.Ideas[i];
	return *this;
}
