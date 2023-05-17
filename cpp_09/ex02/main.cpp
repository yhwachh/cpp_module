#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe PmergeMe;

	if (ac == 1)
	{
		std::cout << "Error: Program need Arguments!" << std::endl;
		exit(0);
	}
	
	for(int i=1;av[i];i++)
	{
		if (PmergeMe.checkError(av[i]))
		{
			std::cout << "Error" << std::endl;
			exit(0);
		}
	}

	PmergeMe.insertValue(av);
	PmergeMe.sortValue(ac);
}