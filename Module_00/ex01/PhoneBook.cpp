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
    int indx = (int)strtoul (input_str.c_str(), NULL, 11);
    if (indx < 0 || indx > 8)
        return -1;
    return indx;
}

int PhoneBook::search()
{
    displayAllContacts();
    std::string input_str;
    std::cout << "Enter a contact index number :";
    std::getline(std::cin, input_str);
    int indx = checkIndex(input_str);
    if (indx == -1)
    {
        std::cout << "Enter 0 to 8 " << std::endl;
        return 0;
    }
    contacts[indx].displayOne();
    return 1;
}

void PhoneBook::exit()
{
    std::cout << "Exiting the program, BYE ;) " << std::endl;
}
