#include "easyfind.hpp"

int main()
{
	std::vector<int> vec(4, 8); /// [8, 8, 8, 8]
	vec.push_back(69); // [8, 8, 8, 8, 5]
	vec.push_back(333); // [8, 8, 8, 8, 5, 333]
	vec.push_back(42); // [8, 8, 8, 8, 5, 333, 42]
	vec.push_back(2); // [8, 8, 8, 8, 5, 333, 42, 2]
	easyfind(vec, 42);
}
