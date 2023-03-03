#ifndef PHONEBOOK_CONTACT_H
#define PHONEBOOK_CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>


class Contact
{
    public:
        Contact();
        ~Contact();

        void    save_contact(int i);

    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
        int _index;
};

class Phonebook
{
    public:
        Phonebook();
        ~Phonebook();

        void    add_contact();
        //void    search_contact();

    private:
        Contact _contact[8];
        int _index;
        int _size;
};


#endif