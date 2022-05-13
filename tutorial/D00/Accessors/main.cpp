#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
    Sample instance;

    instance.setfoo(42);
    std::cout << "the variable is :" << instance.getfoo() << std::endl;
    instance.setfoo(-42);
    std::cout << "the variable is :" << instance.getfoo() << std::endl;
    return 0;
}