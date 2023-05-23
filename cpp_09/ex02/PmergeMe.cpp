#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	if (this != &copy)
        *this = copy;
    return ( *this);
}

void PmergeMe::manipValu(char **av)
{
	for(int i=1;av[i];i++)
		vector.push_back(atoi(av[i]));
	
	for(int i=1;av[i];i++)
		deque.push_back(atoi(av[i]));
}

template <typename T>
void bubbleSort(std::deque<T>& deque) 
{
    int n = deque.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) 
	{
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j) 
		{
            if (deque[j] > deque[j + 1]) 
			{
                std::swap(deque[j], deque[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) 
		{
            // Le tableau est déjà trié, donc nous pouvons arrêter le tri.
            break;
        }
    }
}

template <typename T>
void bubbleSort2(std::vector<T>& vector) 
{
    int n = vector.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) 
	{
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j) 
		{
            if (vector[j] > vector[j + 1]) 
			{
                std::swap(vector[j], vector[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) 
		{
            break;
        }
    }
}

void PmergeMe::sortValue(int ac)
{
	std::cout << "Before: ";
	for(unsigned int i=0;i<vector.size();i++)
		std::cout << vector[i] << " ";
	std::cout << std::endl;

	std::clock_t start = std::clock();
	bubbleSort2(vector);
	std::clock_t end = std::clock();

	std::clock_t start1 = std::clock();
	bubbleSort(deque);
	std::clock_t end1 = std::clock();
	
	double vector_us = double(end - start) / CLOCKS_PER_SEC * 1000;
	double deque_us = double(end1 - start1) / CLOCKS_PER_SEC * 1000;

	std::cout << "After:  ";
	for(unsigned int i=0;i<vector.size();i++)
		std::cout << vector[i] << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << std::setprecision(5) << vector_us << " us";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << std::setprecision(5) << deque_us << " us";
	std::cout << std::endl;
}