#include <stdexcept>
#include <iostream>

int main() {

    try {
        throw 'a';
       }
    catch (int x){
        std::cout << "Inside of catch" << std::endl;
    }
    std::cout << "After catch it will be executed." << std::endl;

    return 0;    
}