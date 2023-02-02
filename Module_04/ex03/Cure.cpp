#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const &obj) : AMateria("cure")
{
    this->_type = obj._type;
}

Cure &Cure::operator=(Cure const &other)
{
    this->_type = other._type;
    return *this;
}

Cure *Cure::clone() const
{
    Cure *cln = new Cure();
    return cln;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " + target.getName() + " " + "s wounds *" << std::endl;
}