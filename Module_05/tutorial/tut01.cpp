#include <stdexcept>
#include <iostream>
#include <limits>

void func1 (int n)
{
    if (n > std::numeric_limits <char> ::max())
        throw std::invalid_argument ("The number is bigger than expected!");
}

int main() {

    try {
       func1(256);
    }
    catch (std::invalid_argument& e){
        std::cerr << e.what() << std::endl;
        return -1;
    }
    return 0;    
}