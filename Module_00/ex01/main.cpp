#include <istream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;

    while (1)
    {
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
            phonebook.exit();
            break;
        }
        else
        {
            std::cout << "Enter only one of these : add, search, exit" << std::endl;
        }
    }

    return 0;
}