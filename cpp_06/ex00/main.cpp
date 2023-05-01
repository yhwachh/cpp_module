#include "Conversion.hpp"


int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "Error: invalid arg" << std::endl;
        std::cout << "./Conversion arg" << std::endl;
        return (1);
    }
    
    Conversion arg(av[1]);

    std::cout << arg;
}

