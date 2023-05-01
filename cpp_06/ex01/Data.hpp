#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

typedef struct 
{
	std::string _name;
    std::string _sexe;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif 