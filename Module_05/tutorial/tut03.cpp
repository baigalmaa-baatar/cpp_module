#include <stdexcept>
#include <iostream>

int main() {

    std::cout << "Before try" << std::endl;
    try {
        std::cout << "Inside of the try" << std::endl;
        throw 'a';
       }
    catch (int x){
        std::cout << "Inside of catch" << std::endl;
    }
    catch (...){
        std::cout << "Default exception " << std::endl;
    }
    std::cout << "After catch it will be executed." << std::endl;

    return 0;    
}