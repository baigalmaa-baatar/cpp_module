/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:01:16 by bbaatar           #+#    #+#             */
/*   Updated: 2022/05/31 16:01:17 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.hpp"

Contact::Contact(void){

}

Contact::~Contact(void){

}

void    Contact::addContact(void)
{
    // First name
    std::cout << "Please, enter first name: ";
    std::getline (std::cin, this->_firstName);
    while (this->_firstName == "")
    {
        std::cout << "First name can't be empty, ";
        std::cout << "please, enter first name: " << std::endl;
        std::getline (std::cin, this->_firstName);
    }
    // Last name
    std::cout << "Please, enter last name: ";
    std::getline (std::cin, this->_lastName);
    while (this->_lastName == "")
    {
        std::cout << "Last name can't be empty, ";
        std::cout << "please, enter last name: " << std::endl;
        std::getline (std::cin, this->_lastName);
    }
    // Nickname
    std::cout << "Please, enter nickname: ";
    std::getline (std::cin, this->_nickname);
    while (this->_nickname == "")
    {
        std::cout << "Nickname can't be empty, ";
        std::cout << "please, enter nickname: " << std::endl;
        std::getline (std::cin, this->_nickname);
    }
    // Phone number
    std::cout << "Please, enter phone number: ";
    std::getline (std::cin, this->_phoneNumber);
    while (this->_phoneNumber == "")
    {
        std::cout << "Phone number can't be empty, ";
        std::cout << "please, enter phone number: " << std::endl;
        std::getline (std::cin, this->_phoneNumber);
    }
    // Darkest secret
    std::cout << "Please, enter darkest secret: ";
    std::getline (std::cin, this->_darkestSecret);
    while (this->_darkestSecret == "")
    {
        std::cout << "Darkest secret can't be empty, ";
        std::cout << "please, enter darkest secret: " << std::endl;
        std::getline (std::cin, this->_darkestSecret);
    }
}

void    Contact::displayOne(void){

    //first name
	if (this->_firstName.length() == 10)
		std::cout << this->_firstName;
	else if (this->_firstName.length() > 10)
	{
		for (int i = 0; i < 9; ++i)
    		std::cout << this->_firstName.at(i);
		std::cout << ".";
	}
	else if (this->_firstName.length() < 10)
	{
		for (size_t i = 0; i < 10 - _firstName.length(); i++)
			std::cout << " ";
		std::cout << this->_firstName;
	}
	std::cout << "|";

    //last name
	if (this->_lastName.length() == 10)
		std::cout << this->_lastName;
	else if (this->_lastName.length() > 10)
	{
		for (int i = 0; i < 9; ++i)
    		std::cout << this->_lastName.at(i);
		std::cout << ".";
	}
	else if (this->_lastName.length() < 10)
	{
		for (size_t i = 0; i < 10 - _lastName.length(); i++)
			std::cout << " ";
		std::cout << this->_lastName;
	}
	std::cout << "|";

    //last name
	if (this->_phoneNumber.length() == 10)
		std::cout << this->_phoneNumber;
	else if (this->_phoneNumber.length() > 10)
	{
		for (int i = 0; i < 9; ++i)
    		std::cout << this->_phoneNumber.at(i);
		std::cout << ".";
	}
	else if (this->_phoneNumber.length() < 10)
	{
		for (size_t i = 0; i < 10 - _phoneNumber.length(); i++)
			std::cout << " ";
		std::cout << this->_phoneNumber;
	}
	std::cout << "|"<< std::endl;
}

void    Contact::displayAll(void)
{
    std::cout << "First name: " << this->_firstName << std::endl;
    std::cout << "Last name: "<< this->_lastName << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Phone number: " << this->_phoneNumber << std::endl;
    std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}
