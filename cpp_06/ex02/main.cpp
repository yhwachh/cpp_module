#include "Base.hpp"

int	main() {

	Base	*random = generate();

	std::cout << "ref:		";
	identify(random);
	std::cout << "pointer:	";
	identify(*random);
}
