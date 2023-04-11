#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain(void);
		Brain(const Brain& origin);
		~Brain(void);
		Brain& operator=(const Brain& origin);
		std::string	getIdea(int i) const;
		void		setIdea(std::string idea, int i);
};

#endif
