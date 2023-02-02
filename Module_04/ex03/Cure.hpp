#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const &obj);
        Cure &operator=(Cure const &other);
        virtual ~Cure() {}
        Cure *clone() const;
        void use(ICharacter &target);
};

#endif