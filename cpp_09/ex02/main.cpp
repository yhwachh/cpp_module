#include "PmergeMe.hpp"


int main(int argc, char *argv[])
{
    if (argc == 1 || argc > 3001)
    {
        std::cout << "Give right amount of arguments" << std::endl;
        return EXIT_FAILURE;
    }

    PmergeMe merge;
    unsigned long temp = 0;

    if (merge.checkInput(argv) == false)
    {
        std::cout << "INPUT False" << std::endl;
        return EXIT_FAILURE;
    }
    std::vector<int> vec;
    std::deque<int> deq;
    for (size_t i = 1; argv[i] != NULL; i++)
    {
        temp = atol(argv[i]);
        if (temp > INT_MAX)
        {
            std::cout << "Int is bigger than max int" << std::endl;
            return EXIT_FAILURE;
        }
        vec.push_back(temp);
        deq.push_back(temp);
	}
    merge.sortVector(vec);
    merge.sortDeque(deq);

    return EXIT_SUCCESS;




}