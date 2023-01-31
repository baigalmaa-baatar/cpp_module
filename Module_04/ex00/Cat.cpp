#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {}
Cat::Cat(Cat const &obj) { *this = obj;}
Cat &Cat::operator=(const Cat &other) { 
    this->setType(other.getType());
    return *this;
}

Cat::~Cat() {};

void        Cat::makeSound() const {
    std::cout << "Cat make sound : miaow miaow" << std::endl;
};
