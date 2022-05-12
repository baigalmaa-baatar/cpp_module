#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(float const f) : pi(f), qd(42) {
    std::cout << "Constructor called!" << std::endl;
    return;
}

Sample::~Sample(void){
    std::cout << "Deconstructor called!" << std::endl;
    return;
}

void    Sample::bar(void) const{
    std::cout << "pi is : " << this->pi << std::endl;
    std::cout << "qd is : " << this->qd << std::endl;
    return;
}
