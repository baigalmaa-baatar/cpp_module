/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:01:35 by bbaatar           #+#    #+#             */
/*   Updated: 2022/05/31 16:01:37 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    num_contacts = 0;
    // std::cout << "Phonebook has created." << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    // std::cout << "Phonebook has deleted." << std::endl;
}

bool    PhoneBook::isFull(void)
{
    return num_contacts == 8;
}

void    PhoneBook::addContact(void)
{
    if (num_contacts == 8)
        num_contacts -= 8;
    contacts[num_contacts].addContact();
    num_contacts++;
}

void    PhoneBook::search(void)
{
    int i = 0;
    int index = 0;
    std::string input;

    std::cout << "Index | First name | Last name | Nickname" << std::endl;
    while (i < 8)
    {
        std::cout << i << "|";
        contacts[i].displayOne();
        i++;
    }
    while (1)
    {
        std::cout << "\001\033[32m\002Enter the search index: \001\033[0m\002 " << std::endl;
        std::cin >> input;
        index = input[0] - '0';
        if(!std::cin)
        {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "\001\033[32m\002Enter the index between 0 to 7.\001\033[0m\002 " << std::endl;
        }
        else if (index >= 0 && index < 8)
        {
            contacts[index].displayAll();
            break;
        }
        else
            std::cout << "\001\033[32m\002Enter the index between 0 to 7.\001\033[0m\002 " << std::endl;
    }
}
