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
    this->_index++;
}

void    Phonebook::search_contact()
{
    std::string command;
    int j = 0;
    int i = 1;
    this->_index2 = 0;

    while(i <= this->_size)
    {
        this->_contact[this->_index2].get_contact();
        i++;
        this->_index2++;
    }
    std::cout << "you index ? : ";
    std::getline(std::cin, command);
    j = std::stoi(command);
    while(42)
    {
        if(j >= 1 && j <= 8 && j <= this->_size)
        {
            this->_contact[this->_index2 = j - 1].wr_contact();
            break;
        }
        else
        {
            std::cout << "try again : " << std::endl;
            std::cout << "you index ? : ";
            std::getline(std::cin, command);
            j = std::stoi(command);

        }
    }

}


int main(void)
{
    Phonebook phonebook;
    std::string command;

    while(42)
    {
        std::cout << "Your arg : ";
        std::getline(std::cin, command); 
        if(command == "ADD")
            phonebook.add_contact();
        else if(command == "SEARCH")
            phonebook.search_contact();
        else if(command == "EXIT")
            exit(0);
        else
        {
            std::cout << "try again";
            std::cout << std::endl;
        }
    }
    return 0;
}