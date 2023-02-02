#include <istream>
#include "PhoneBook.hpp"
#include "Contact.hpp"


int main(int argc, char **argv[])
{
    PhoneBook phonebook;
    std::string command;

    std::cout << "Enter a command :";
    std::getline(std::cin, command);
    if (command == "add")
    {
        phonebook.add();
    }
    else if (command == "search")
    {
        phonebook.search();
    }
    else if (command == "exit")
    {
        std::cout << "Exiting the program, BYE ;) " << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Enter only one of these : add, search, exit" << std::endl;
    }

    return 0;
}