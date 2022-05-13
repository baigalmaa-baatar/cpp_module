#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
    std::cout << "Constructor called!" << std::endl;
    this->setfoo(0);
    std::cout << "this->getfoo(): "<< this->getfoo() << std::endl;

    return;
}

Sample::~Sample(void){
    std::cout << "Destructor called!" << std::endl;
    return;
}

int    Sample::getfoo(void)const{
    return(this->_foo);
}

void    Sample::setfoo(int v){
    if (v >= 0)
        this->_foo = v;
    return;
}