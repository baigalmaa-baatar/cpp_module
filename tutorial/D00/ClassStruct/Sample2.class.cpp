#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(void){
    std::cout << "Constructor called!" << "\n" << std::endl;

    this->foo = 42;
    std::cout << "foo is : " << this->foo << "\n" << std::endl;

    this->bar();
    return;
}

Sample2::~Sample2(void){
    std::cout << "Destructor called!" << "\n" << std::endl;
    return;
}

void    Sample2::bar(void)const{
    std::cout << "bar has called!" << "\n" << std::endl;
    return;
}