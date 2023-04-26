#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat str("hi", 42);
		std::cout << str << std::endl;
		str.incremente();	
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
