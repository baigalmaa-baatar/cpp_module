#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact
{
    private:
        std::string     _first_name;
        std::string     _last_name;
        std::string     _nickname;
        std::string     _darkest_secret;
        std::string     _phone_number;
    
    public:
        Contact();
        Contact(Contact const &obj);
        Contact &operator=(const Contact &other);
        ~Contact();

        void getInput(std::string message, std::string &entry);
        void            add();
        void            display(int indx);
        void            displayOne();
};

# endif