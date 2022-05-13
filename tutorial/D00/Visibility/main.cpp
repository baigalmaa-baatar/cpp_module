#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
    Sample instance;

    instance.publicfoo = 42;
    std::cout << "Public foo is : " << instance.publicfoo << "\n" << std::endl;
    
    instance.publicbar();
    // instance._privatebar();
    
    return 0;
}