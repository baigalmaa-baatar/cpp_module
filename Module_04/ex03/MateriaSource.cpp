#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materials[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_materials[i])
            delete _materials[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
    for (int i = 0; i < 4; i++)
    {
        _materials[i] = obj._materials[i];
    }
}
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    for (int i = 0; i < 4; i++)
    {
        _materials[i] = other._materials[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (m == NULL)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (_materials[i] == NULL)
        {
            _materials[i] = m;
            break;
        }

    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materials[i]->getType() == type)
        {
            return _materials[i]->clone();
        }
    }
    return 0;
}