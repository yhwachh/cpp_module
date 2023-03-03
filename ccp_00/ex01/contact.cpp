#include "phonebook_contact.hpp"

Contact::Contact(void):_index(0){}

Contact::~Contact(void){}


void    Contact::save_contact(int i)
{
    this->_index = i;
    while(this->_first_name.empty())
    {
        std::cout << "Your First name : "; 
        std::getline(std::cin, this->_first_name);
    }
    while(this->_last_name.empty())
    {
        std::cout << "Your Last name : ";
        std::getline(std::cin, this->_last_name);
    }
    while(this->_nickname.empty())
    {
        std::cout << "Your Nick name : "; 
        std::getline(std::cin, this->_nickname);
    }
    while(this->_phone_number.empty())
    {
        std::cout << "Your Phone number : ";
        std::getline(std::cin, this->_phone_number);
    }
    while(this->_darkest_secret.empty())
    {
        std::cout << "Your Darkest secret : ";
        std::getline(std::cin, this->_darkest_secret);
    }
    std::cout << "Contact index : " << this->_index + 1 << std::endl;
}