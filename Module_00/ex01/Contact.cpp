#include "Contact.hpp"

Contact::Contact()
{
    // _first_name = "";
    // _last_name = "";
    // _nickname = "";
    // _darkest_secret = "";
    // _phone_number = "";
}

Contact::Contact(Contact const &obj)
{
    _first_name = obj._first_name;
    _last_name = obj._last_name;
    _nickname = obj._nickname;
    _darkest_secret = obj._darkest_secret;
    _phone_number = obj._phone_number;
}

Contact &Contact::operator=(const Contact &other)
{
    _first_name = other._first_name;
    _last_name = other._last_name;
    _nickname = other._nickname;
    _darkest_secret = other._darkest_secret;
    _phone_number = other._phone_number;
    return *this;
}

Contact::~Contact()
{
}

void Contact::getInput(std::string message, std::string &entry)
{
    std::cout << "Please, enter " + message + " : ";
    std::getline(std::cin, entry);
    while (entry == "")
    {
        std::cout << entry + " can't be empty, ";
        std::cout << "please, enter " + entry + " : " << std::endl;
        std::getline(std::cin, entry);
    }
}

void Contact::add()
{
    getInput("first name", _first_name);
    getInput("last name", _last_name);
    getInput("nickname", _nickname);
    getInput("darkest secret", _darkest_secret);
    getInput("phone number", _phone_number);
}

void Contact::display(int indx)
{
    std::cout << std::right << std::setw(10) << indx;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << _first_name;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << _last_name;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << _nickname << std::endl;
}

void Contact::displayOne()
{
    std::cout << "First name :      " <<  _first_name << std::endl;
    std::cout << "Last name :       " << _last_name << std::endl;
    std::cout << "Nickname :        " << _nickname << std::endl;
    std::cout << "Darkest secret :  " << _darkest_secret << std::endl;
    std::cout << "Phone number :    " << _phone_number << std::endl;
}