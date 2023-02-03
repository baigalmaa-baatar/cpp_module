#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _idx(0)
{
}
PhoneBook::PhoneBook(PhoneBook const &obj)
{
    (void)obj;
}

PhoneBook &PhoneBook::operator=(const PhoneBook &other)
{
    (void)other;
    return *this;
}

PhoneBook::~PhoneBook()
{
}

// member functions:
void PhoneBook::add()
{
    if (_idx == 8)
        contacts[_idx].add();
    else
        contacts[_idx++].add();
}

void PhoneBook::displayAllContacts()
{
    for (size_t i = 0; i < 8; i++)
    {
        contacts[i].display(i);
    }
}

int PhoneBook::checkIndex(std::string input_str)
{
    int indx = (int)strtoul(input_str.c_str(), NULL, 11);
    if (indx < 0 || indx > 7)
        return -1;
    return indx;
}

void    PhoneBook::search()
{
    displayAllContacts();
    std::string input_str;
    int indx = 0;
    while (1)
    {
        std::cout << "Enter 0 to 7 :";
        std::getline(std::cin, input_str);
        int indx = checkIndex(input_str);
        if (indx == -1)
            std::cout << "Enter 0 to 7 :" << std::endl;
        else
            break;
    }
    contacts[indx].displayOne();
}

void PhoneBook::exit()
{
    std::cout << "Exiting the program, BYE ;) " << std::endl;
}
