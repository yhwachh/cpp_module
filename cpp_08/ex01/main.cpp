#include "Span.hpp"


int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;

/*
Span Sp = Span(10);

	Sp.addRange(9);

	std::cout << Sp.shortestSpan() << std::endl;
	std::cout << Sp.longestSpan() << std::endl;
*/
}
