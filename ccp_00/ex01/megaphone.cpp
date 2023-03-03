#include "phonebook_contact.hpp"

Phonebook::Phonebook(void):_index(0), _size(0){}

Phonebook::~Phonebook(void){}

void    Phonebook::add_contact(void)
{
    if(this->_index == 8)
        this->_index = 0;
    if(this->_size < 8)
        this->_size++;
    this->_contact[this->_index].save_contact(this->_index);
}






int main(void)
{
    Phonebook phonebook;
    std::string command;

    while(42)
    {
        std::getline(std::cin, command); 
        if(command == "ADD")
            phonebook.add_contact();
        //else if(command == "SEARCH")
        //    phonebook.search_contact();
        else if(command == "EXIT")
            exit(0);
        else
            std::cout << "try again" << std::endl;
    }
    return 0;
}