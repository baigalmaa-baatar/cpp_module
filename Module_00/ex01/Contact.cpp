#include <iostream>
#include <string.h>
#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void    Contact::add(void)
{
    int i = 0;

    while (i < 8)
    {
        if (this->contacts[0][i].length() == 0 || i == 7)
        {
            std::cout << "Please, enter first name: ";
            std::getline (std::cin, this->contacts[0][i]);
            std::cout << "Last name: ";
            std::getline (std::cin, this->contacts[1][i]);
            std::cout << "Nickname: ";
            std::getline (std::cin, this->contacts[2][i]);
            std::cout << "Phone number: ";
            std::getline (std::cin, this->contacts[3][i]);
            std::cout << "Darkest secret: ";
            std::getline (std::cin, this->contacts[4][i]);
            break;
        }
        i++;
    }
}
