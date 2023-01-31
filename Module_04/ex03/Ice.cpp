#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {};
Ice *Ice::clone() {
    AMateria *ice = new Ice();
    return ice;
}
