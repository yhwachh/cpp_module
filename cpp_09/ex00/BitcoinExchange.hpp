#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <string>
#include <sstream>


class Bitcoin
{
private:
    std::map<std::string,float> _database;
public:
    Bitcoin();
    Bitcoin(const Bitcoin &copy);
    Bitcoin &operator=(const Bitcoin &copy);
    ~Bitcoin ();

    void    openReadData(std::string database);
    void    inputData(std::string input);
    int    corectdate(std::string date);
    float    finddate(std::string date);
};




#endif