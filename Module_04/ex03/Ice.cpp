#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const &obj) : AMateria("ice")
{
    this->_type = obj._type;
}

Ice &Ice::operator=(Ice const &other)
{
    this->_type = other._type;
    return *this;
}

Ice *Ice::clone() const
{
    Ice *cln = new Ice();
    return cln;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
