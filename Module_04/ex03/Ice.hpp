#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &obj);
        Ice &operator=(Ice const &other);

        Ice *clone();
        
};

#endif