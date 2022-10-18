#ifndef ITER_TEST_HPP
# define ITER_TEST_HPP

#include <iostream>
#include <string>

template <typename T> 
void iter(T *array, size_t size, void (*f)(T&))
{
    for (int i=0; i < size; i++)
        f(array[i]);
}

template <typename T> 
void    func_output1(T &nbr) {
    // std::cout << "Testing the funcOut1:" << '\n';
    std::cout << nbr << '\n';
}

#endif