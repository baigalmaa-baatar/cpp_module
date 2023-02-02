#include "Contact.hpp"

Contact::Contact()
{
    _first_name = "";
    _last_name = "";
    _nickname = "";
    _darkest_secret = "";
    _phone_number = 0;
}

Contact::Contact(Contact const &obj){
    _first_name = obj._first_name;
    _last_name = obj._last_name;
    _nickname = obj._nickname;
    _darkest_secret = obj._darkest_secret;
    _phone_number = obj._phone_number;
}

Contact &Contact::operator=(const Contact &other){
    _first_name = other._first_name;
    _last_name = other._last_name;
    _nickname = other._nickname;
    _darkest_secret = other._darkest_secret;
    _phone_number = other._phone_number;
    return *this;
}

Contact::~Contact(){

}