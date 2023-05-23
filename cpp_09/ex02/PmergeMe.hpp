#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <iomanip>

class PmergeMe
{
	private:
	std::vector<int>vector;
	std::deque<int>deque;

	public:
	PmergeMe();
	PmergeMe(const PmergeMe &copy);
	PmergeMe &operator=(const PmergeMe &copy);
	~PmergeMe();
	
	void manipValu(char **av);
	void sortValue(int ac);
};

#endif