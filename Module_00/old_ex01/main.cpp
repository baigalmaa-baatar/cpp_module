#include <iostream>
#include <string.h>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook   phoneBook;
    std::string command;

	std::cout << "\001\033[32m\002Enter add, search or exit:\001\033[0m\002 " << std::endl;
	while(1)
	{
        std::cout << "\001\033[32m\002📝>\001\033[0m\002 ";
        std::getline(std::cin, command);
        if (std::cin.eof()) break;          //to avoid ctrl+d error
		if (command == "add" || command == "ADD")
		    phoneBook.add();
        else if (command == "search" || command == "SEARCH")
            phoneBook.search();
        else if (command == "exit" || command == "EXIT")
        {
            std::cout << "\001\033[32m\002Existing phonebook...\001\033[0m\002 " << std::endl;
            std::cout << "\001\033[32m\002DONE\001\033[0m\002 " << std::endl;
            break;
        }
		else
			std::cout << "\001\033[32m\002Enter add, search or exit:\001\033[0m\002 " << std::endl;
	}

    return(0);
}
