#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
    Sample instance1(42);
    Sample instance2(42);

    if(&instance1 == &instance1)
        std::cout << "instance1's are physically equal :" << std::endl;
    else
        std::cout << "instance1's are physically not equal :" << std::endl;        
    if(&instance1 == &instance2)
        std::cout << "instance1 and instance2 are physically equal :" << std::endl;
    else
        std::cout << "instance1 and instance2 are physically not equal :" << std::endl;
    
    if(instance1.compare(&instance1) == 0)
        std::cout << "instance1's are physically equal :" << std::endl;
    else
        std::cout << "instance1's are physically not equal :" << std::endl;
    if(instance1.compare(&instance2) == 0)
        std::cout << "instance1's are physically equal :" << std::endl;
    else
        std::cout << "instance1's are physically not equal :" << std::endl;
    return 0;
}