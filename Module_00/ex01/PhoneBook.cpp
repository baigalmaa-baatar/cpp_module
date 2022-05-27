#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void    PhoneBook::search(void)
{
    int i = 0;
    int index = 0;

    while (i < 8)
    {
        if (this->contacts[0][i].length() != 0)
        {
            std::cout <<  i << "|";
            std::cout << std::right << this->contacts[0][i].substr(0, 10) << "|";
            std::cout << std::right << this->contacts[1][i].substr(0, 10) << "|";
            std::cout << std::right << this->contacts[2][i].substr(0, 10) << std::endl;
        }
        i++;
    }
    while (1)
    {
        std::cout << "\001\033[32m\002Enter the search index: \001\033[0m\002 " << std::endl;
        std::cin >> index;
        if(!std::cin)
        {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "\001\033[32m\002Enter the index between 0 to 7.\001\033[0m\002 " << std::endl;
        }
        else if (index >= 0 && index < 8)
        {
            if (this->contacts[0][index].length() != 0)
            {
                std::cout << "First name: " << this->contacts[0][index] << std::endl;
                std::cout << "Last name: "<< this->contacts[1][index] << std::endl;
                std::cout << "Nickname: " << this->contacts[2][index] << std::endl;
                std::cout << "Phone number: " << this->contacts[3][index] << std::endl;
                std::cout << "Darkest secret: " << this->contacts[4][index] << std::endl;
                break;
            }
            else
                std::cout << "\001\033[32m\002Enter existing contact index number.\001\033[0m\002 " << std::endl;
        }
        else
            std::cout << "\001\033[32m\002Enter the index between 0 to 7.\001\033[0m\002 " << std::endl;
    }
}