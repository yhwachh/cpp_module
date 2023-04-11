#include "Brain.hpp"

Brain::Brain()
{
	std::cout << " brain constructor call " << std::endl;
}

Brain::Brain(const Brain& tp)
{
	std::cout << " brain copy constructor call " << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = tp.ideas[i];
}

Brain::~Brain()
{
	std::cout << " brain destructor call " << std::endl;
}

Brain& Brain::operator=(const Brain& tp)
{
	if (this != &tp)
	{
		Brain brain = Brain();
		for (int i = 0; i < 100; i++)
			this->ideas[i] = tp.ideas[i];
	}
	return *this;
}

std::string	Brain::getIdea(int i) const
{
	return this->ideas[i];
}

void	Brain::Idea(std::string idea, int i)
{
	this->ideas[i] = idea;
}
