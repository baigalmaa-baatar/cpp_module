#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria(std::string const &type);
        AMateria(AMateria const &obj);
        AMateria &operator=(AMateria const &other);

        std::string const &getType() const; // Returns the materia type
        virtual AMateria *clone() const = 0; //abstract
        virtual void use(ICharacter &target); 
};

#endif