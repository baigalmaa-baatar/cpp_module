#include <stdexcept>
#include <iostream>

int main() {

    int x = 2;

    std::cout << "Before try" << std::endl;
    try {
        std::cout << "Inside of the try" << std::endl;
       if (x < 0){
           std::cout << "Inside of if condition" << std::endl;
           throw x;
           std::cout << "After throw:never executed, because it thrown before this sentence" << std::endl;
       }
        std::cout << "x was positive number." << std::endl;
    }
    catch (int x){
        std::cout << "Inside of catch" << std::endl;
    }
    std::cout << "After catch it will be executed." << std::endl;

    return 0;    
}