#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria        *_materials[4];

    public:
        MateriaSource();
        MateriaSource(MateriaSource const &obj);
        MateriaSource &operator=(const MateriaSource &other);
        ~MateriaSource();
        void learnMateria(AMateria *);
        AMateria *createMateria(std::string const &type);
};

#endif