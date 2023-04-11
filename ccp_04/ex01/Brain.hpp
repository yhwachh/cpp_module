#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain& tp);
		~Brain();
		Brain& operator=(const Brain& tp);
		std::string	getIdea(int i) const;
		void		Idea(std::string idea, int i);
	
	private:
		std::string ideas[100];

};

#endif
