#include "BitcoinExchange.hpp"


Bitcoin::Bitcoin(){}

Bitcoin::~Bitcoin(){}

Bitcoin::Bitcoin (const Bitcoin &copy)
{
}

Bitcoin &Bitcoin::operator=(const Bitcoin &copy)
{
    return(*this);
}


void Bitcoin::OpenReadData(std::string database)
{
    std::ifstream file(database);
    std::string line;
    int plc = 0;

    if (!file.is_open()) 
    {
    std::cerr << "Erreur lors de l'ouverture du fichier " << dataBase << std::endl;
    return 1;
    }

    while(getline(file,line))
    {
        int plc = string.find(",");
        std::string str = string.substr(plc + 1);// apres la virgule 
        std::string str1 = string.substr(0, plc);// avons la virgule
        _database.insert(make_paire(str1, std::atof(str.c_str())));
    }





}