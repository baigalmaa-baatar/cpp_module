#include <iostream>
#include "Sample.class.hpp"

void    f0(void){
    Sample instance;

    std::cout << "Number of instances inside f0 :" << Sample::getNbInstant() << std::endl;
    return;
}

void    f1(void){
    Sample instance;

    std::cout << "Number of instances inside f1 :" << Sample::getNbInstant() << std::endl;
    f0();

    return;
}

int main(void)
{
    std::cout << "Number of instances before f1() function :" << Sample::getNbInstant() << std::endl;
    f1();
    std::cout << "Number of instances after f1() function :" << Sample::getNbInstant() << std::endl;
   
    return 0;
}