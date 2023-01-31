#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    _cat_brain = new Brain();
}
Cat::Cat(Cat const &obj) { *this = obj;}
Cat &Cat::operator=(const Cat &other) { 
    this->setType(other.getType());
    return *this;
}

Cat::~Cat() {
    delete _cat_brain;
};

void        Cat::makeSound() const {
    std::cout << "Cat make sound : miaow miaow" << std::endl;
};
Brain   &Cat::getBrain() const { return *_cat_brain;}
void    Cat::setBrain(Brain &brain) { *_cat_brain = brain;}
