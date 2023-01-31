#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();//default constructor
        Animal(const std::string &type); //constructor with parameters
        Animal(Animal const &obj); //copy constructor
        Animal &operator=(const Animal&other); //copy assignment operator

        virtual ~Animal();

        std::string     getType() const;
        void            setType(std::string type);
        virtual void    makeSound() const;
};

# endif