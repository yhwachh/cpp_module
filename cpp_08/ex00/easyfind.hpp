#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>

template<typename T>
void easyfind(T &vec, int nbr)
{
	for(unsigned int i=0;i<vec.size();i++)
	{
		if (std::find(vec.begin(), vec.end(), nbr) == vec.end())
		{
			std::cerr << "Error" << std::endl;			
			return ;
		}
	}	
	std::cout << nbr << std::endl;
}	

#endif
