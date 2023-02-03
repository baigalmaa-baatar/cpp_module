#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
    private:
        size_t      _idx;

    public:
        PhoneBook();
        PhoneBook(PhoneBook const &obj);
        PhoneBook &operator=(const PhoneBook &other);
        ~PhoneBook();

        Contact contacts[8];
        
        //util functions:

        int     checkIndex(std::string str);
        void    displayAllContacts();
        
        //member functions:
        void            add();
        std::string     search();
        void            exit();
};

# endif