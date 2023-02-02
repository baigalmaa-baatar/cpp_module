#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &obj);
        Ice &operator=(Ice const &other);
        virtual ~Ice() {}

        Ice *clone() const;
        void use(ICharacter &target);
};

#endif