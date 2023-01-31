#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    _dog_brain = new Brain();
}
Dog::Dog(Dog const &obj) { *this = obj;}
Dog &Dog::operator=(const Dog &other) { 
    this->setType(other.getType());
    return *this;
}

Dog::~Dog() {
    delete _dog_brain;
};

void        Dog::makeSound() const {
    std::cout << "Dog make sound : woof woof" << std::endl;
};

Brain   &Dog::getBrain() const { return *_dog_brain;}
void    Dog::setBrain(Brain &brain) { *_dog_brain = brain;}