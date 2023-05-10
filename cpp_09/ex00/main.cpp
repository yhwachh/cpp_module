#include "BitcoinExchange.hpp"




int main(int av, char **av)
{
    if(av != 2)
    {
        std::cout << "./btc file.txt" << std::endl;
        return(1);
    }

    Bitcoin btc;

    btc.OpenReadData("data.csv");



    return (0);
}