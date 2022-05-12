#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
    std::cout << "Constructor called!" << std::endl;

    this->foo=42;
    std::cout << "this->foo: " << this->foo << std::endl;
    this->bar();
    return;
}

Sample::~Sample(void){
    std::cout << "Deconstructor called!" << std::endl;
    return;
}

void    Sample::bar(void){
    std::cout << "Bar function has called." << std::endl;
    return;
}
