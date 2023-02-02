#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
    private:
        std::string     _first_name;
        std::string     _last_name;
        std::string     _nickname;
        std::string     _darkest_secret;
        int              _phone_number;
    
    public:
        Contact();
        Contact(Contact const &obj);
        Contact &operator=(const Contact &other);
        ~Contact();
};

# endif