#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
    Sample instance;

    instance.foo = 42;
    std::cout << "The foo is :" << instance.foo << "\n" << std::endl;
    instance.bar();
    return 0;
}