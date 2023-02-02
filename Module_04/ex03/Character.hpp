#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include <iostream>

class AMateria;

class Character : public ICharacter
{
    private:
        std::string     _name;
        AMateria        *_slots[4];

    public:
        Character(std::string const &name);
        Character(Character const &obj);
        Character &operator=(const Character &other);
        ~Character();
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif