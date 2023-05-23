#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe PmergeMe;

	if (ac == 1)
	{
		std::cout << "./PmergeMe arg" << std::endl;
		return (-1);
	}
	
	for(int i=1;av[i];i++)
	{
		for(int j = 0; av[i][j]; j++)
		{
			if (isdigit(av[i][j]) == false)
			{
				std::cout << "Error" << std::endl;
				return (-1);
			}
		}
	}

	PmergeMe.manipValu(av);
	PmergeMe.sortValue(ac);

	return (0);
}