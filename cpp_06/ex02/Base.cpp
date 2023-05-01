#include "Base.hpp"

Base *generate(void)
{
	srand(time(0));

	int number = rand() % 3;

	if (number == 0)
		return (new A);
	else if (number == 1)
		return (new B);
	else if (number == 2)
		return (new C);
	return (NULL);
}

void	identify( Base* p ) 
{

	if (dynamic_cast<A *>(p)) {
		std::cout << "A" << std::endl;
	}
	if (dynamic_cast<B *>(p)) {
		std::cout << "B" << std::endl;
	}
	if (dynamic_cast<C *>(p)) {
		std::cout << "C" << std::endl;
	}
}
void identify(Base& p) 
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception const &e) {

	}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception const &e) {

	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception const &e) {

	}
}
