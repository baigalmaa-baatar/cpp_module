#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        std::string     _contact;
    
    public:
        PhoneBook();
        PhoneBook(PhoneBook const &obj);
        PhoneBook &operator=(const PhoneBook &other);
        ~PhoneBook();

        Contact *contacts;
        //functions:
        void    add();
        void    search();
        void    exit();
};

# endif