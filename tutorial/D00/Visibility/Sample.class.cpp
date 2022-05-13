#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
    std::cout << "Constructor called!" << "\n" << std::endl;

    this->publicfoo = 1;
    std::cout << "publicfoo is : " << this->publicfoo << "\n" << std::endl;
    this->_privatefoo = 2;
    std::cout << "_privatefoo is : " << this->_privatefoo << "\n" << std::endl;

    this->publicbar();
    this->_privatebar();
    return;
}

Sample::~Sample(void){
    std::cout << "Deconstructor called!" << "\n" << std::endl;
    return;
}

void    Sample::publicbar(void)const{
    std::cout << "publicbar has called!" << "\n" << std::endl;
    return;
}

void    Sample::_privatebar(void)const{
    std::cout << "_privatebar() has called!" << "\n" << std::endl;
    return;
}
