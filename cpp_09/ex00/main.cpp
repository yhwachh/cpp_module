#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "./btc file.txt" << std::endl;
        return(1);
    }

    Bitcoin btc;

    btc.openReadData("data.csv");
    btc.inputData(av[1]);

    return (0);
}