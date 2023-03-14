#include "phonebook_contact.hpp"

Contact::Contact(void):_index(0){}

Contact::~Contact(void){}


void    Contact::save_contact(int i)
{
    this->_index = i;
    this->_first_name = "";
    while(this->_first_name.empty())
    {
        std::cout << "Your First name : "; 
        std::getline(std::cin, this->_first_name);
    }
    this->_last_name = "";
    while(this->_last_name.empty())
    {
        std::cout << "Your Last name : ";
        std::getline(std::cin, this->_last_name);
    }
    this->_nickname = "";
    while(this->_nickname.empty())
    {
        std::cout << "Your Nick name : "; 
        std::getline(std::cin, this->_nickname);
        if(std::cin.eof())
            exit(0);
    }
    this->_phone_number = "";
    while(this->_phone_number.empty())
    {
        std::cout << "Your Phone number : ";
        std::getline(std::cin, this->_phone_number);
    }
    this->_darkest_secret = "";
    while(this->_darkest_secret.empty())
    {
        std::cout << "Your Darkest secret : ";
        std::getline(std::cin, this->_darkest_secret);
    }
    std::cout << "Contact index : " << this->_index + 1;
    std::cout << std::endl;
}

std::string Contact::contact_format(std::string str)
{
	if(str.length() > 10)
	{
		str.resize(9);
		str.insert(9, ".");
	}
	return (str);
}

void    Contact::get_contact()
{
    std::cout << "|Index     |First name|Last name |Nickname  |";
    std::cout << std::endl;
    if(this->_first_name.length() > 10)
        this->_first_name = contact_format(this->_first_name);
    if(this->_last_name.length() > 10)
        this->_last_name = contact_format(this->_last_name);
    if(this->_nickname.length() > 10)
        this->_nickname = contact_format(this->_nickname);
    std::cout << "|         "<< this->_index + 1;
    std::cout << "|" << std::setw(10) << this->_first_name ;
    std::cout << "|" << std::setw(10) << this->_last_name ;
    std::cout << "|" << std::setw(10) << this->_nickname ;
    std::cout << "|" << std::endl;
}

void    Contact::wr_contact()
{
    std::cout << "First name     |"<< this->_first_name << std::endl;
    std::cout << "Last name      |"<< this->_last_name << std::endl;
    std::cout << "Nickname       |"<< this->_nickname << std::endl;
    std::cout << "Phone number   |"<< this->_phone_number << std::endl;
    std::cout << "Darkest secret |"<< this->_darkest_secret << std::endl;
}