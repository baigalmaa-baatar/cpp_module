#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v):_foo(v){
    std::cout << "Constructor called!" << std::endl;
    return;
}

Sample::~Sample(void){
    std::cout << "Destructor called!" << std::endl;
    return;
}

int    Sample::getfoo(void)const{
    return(this->_foo);
}

int    Sample::compare(Sample * other) const{
    if (this->_foo < other->getfoo())
        return -1;
    if (this->_foo > other->getfoo())
        return 1;
    return 0;
}