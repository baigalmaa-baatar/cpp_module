#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
    {
        _slots[i] = NULL;
    }
}

Character::~Character ()
{
    for (int i = 0; i < 4; i++)
    {
        if (_slots[i]) 
            delete _slots[i];
    }
}

Character::Character(Character const &obj)
{
    _name = obj._name;
    for (int i = 0; i < 4; i++)
    {
        _slots[i] = obj._slots[i];
    }
}

Character &Character::operator=(const Character &other)
{
    this->_name = other._name;
    for (int i = 0; i < 4; i++)
    {
        this->_slots[i] = other._slots[i];
    }
    return *this;
}

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    if (m == NULL)
        return ;
    for (int i = 0; i< 4; i++)
    {
        if (_slots[i] == NULL)
        {
            _slots[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    _slots[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3 || _slots[idx] == 0)
        return;
    _slots[idx]->use(target);
}