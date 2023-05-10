#ifndef BITCOINEXCHAGE_HPP
#define BITCOINEXCHAGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fsteram>


class Bitcoin
{
private:
    std::map<std::string,float> _database;
public:
    Bitcoin();
    Bitcoin(const Bitcoin &copy);
    Bitcoin &operator=(const Bitcoin &copy);
    ~Bitcoin ();

    void    OpenReadData(std::string database);
};




#endif