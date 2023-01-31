#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain *_cat_brain;

    public:
        Cat();
        Cat(Cat const &obj);
        Cat &operator=(const Cat&other);

        virtual ~Cat();
        void    makeSound() const;

        Brain   &getBrain() const;
        void    setBrain(Brain &brain);
};

# endif