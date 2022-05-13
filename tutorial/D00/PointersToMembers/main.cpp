#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
    Sample  instance;
    Sample *    instancecmp = &instance;

    int     Sample::*p = NULL;
    void    (Sample::*f)(void) const;

    p = &Sample::foo;
    
    std::cout << "Value of number foo: " << instance.foo << std::endl;
    instance .*p = 21;
    std::cout << "Value of number foo: " << instance.foo << std::endl;
    instance .*p = 42;
    std::cout << "Value of number foo: " << instance.foo << std::endl;
   
    f = &Sample::bar;

    (instance.*f)();
    (instancecmp->*f)();
    
    return 0;
}