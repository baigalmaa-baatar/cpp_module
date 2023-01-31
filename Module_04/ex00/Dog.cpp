#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {}
Dog::Dog(Dog const &obj) { *this = obj;}
Dog &Dog::operator=(const Dog &other) { 
    this->setType(other.getType());
    return *this;
}

Dog::~Dog() {};

void        Dog::makeSound() const {
    std::cout << "Dog make sound : woof woof" << std::endl;
};
