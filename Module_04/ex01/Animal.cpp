#include "Animal.hpp"

Animal::Animal() {}
Animal::Animal(const std::string &type) : _type(type) {}
Animal::Animal(Animal const &obj) {
    this->_type = obj._type;
}
Animal &Animal::operator=(const Animal &other) {
    this->_type = other._type;
    return *this;
}

Animal::~Animal() {};

std::string Animal::getType() const {return _type; }
void        Animal::setType(std::string type) {_type = type; }
void        Animal::makeSound() const {
    std::cout << "Animal make sound" << std::endl;
}
