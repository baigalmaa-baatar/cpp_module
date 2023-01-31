#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain *_dog_brain;
    public:
        Dog();
        Dog(Dog const &obj);
        Dog &operator=(const Dog&other);

        virtual ~Dog();
        void    makeSound() const;
        Brain   &getBrain() const;
        void    setBrain(Brain &brain);
};

# endif