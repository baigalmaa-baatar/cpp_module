#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(void){
    std::cout << "Constructor called!" << "\n" << std::endl;

    this->foo = 1;
    std::cout << "foo is : " << this->foo << "\n" << std::endl;

    this->bar();
    return;
}

Sample1::~Sample1(void){
    std::cout << "Destructor called!" << "\n" << std::endl;
    return;
}

void    Sample1::bar(void)const{
    std::cout << "bar has called!" << "\n" << std::endl;
    return;
}