#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {}
AMateria::AMateria(AMateria const &obj) { *this = obj;}
AMateria &AMateria::operator=(AMateria const &other) {
    this->_type = other.getType();
    return *this;
}

std::string const &AMateria::getType() const { return _type;}
void AMateria::use(ICharacter &target) {}