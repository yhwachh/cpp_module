#include "Brain.hpp"

/*
 * -------------------------- Constructor -----------------------------
 */

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& origin)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = origin.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

/*
 * -------------------------- Destructor -----------------------------
 */

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

/*
 * -------------------------- Operator -----------------------------
 */

Brain& Brain::operator=(const Brain& origin)
{
	if (this != &origin)
	{
		Brain brain = Brain();
		for (int i = 0; i < 100; i++)
			this->ideas[i] = origin.ideas[i];
	}
	return *this;
}

/*
 * -------------------------- Function -----------------------------
 */

std::string	Brain::getIdea(int i) const
{
	return this->ideas[i];
}

void	Brain::setIdea(std::string idea, int i)
{
	this->ideas[i] = idea;
}
