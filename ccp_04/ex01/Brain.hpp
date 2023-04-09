#ifndef BRAIN_HPP
	#define BRAIN_HPP
#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain &tp);
		~Brain();
		Brain & operator=(const Brain &tp);

	private:
		std::string Ideas[100];

};

#endif