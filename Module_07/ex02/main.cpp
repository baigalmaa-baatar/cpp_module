/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:19:10 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/07 10:19:11 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

//Class template video explanation:
// https://www.youtube.com/watch?v=mQqzP9EWu58

//Subscrite operator c++ [] :
// https://www.geeksforgeeks.org/overloading-subscript-or-array-index-operator-in-c/

int main(void)
{
    std::cout << "\n******* Testing empty arrays *******" << std::endl;
    
    {
        Array<int> emptyArray;
        std::cout << "\n******* Hey empty array has created! *******" << std::endl;

        try {
            std::cout << emptyArray[0] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

    }

    std::cout << "\n******* Testing integer arrays *******" << std::endl;

    Array<int> intArray(3);
    intArray[0] = 10;
    intArray[1] = 20;
    intArray[2] = 30;

    for (int i = 0; i < 3; i++)
    {
        std::cout << intArray[i] << std::endl;
    }

    std::cout << "\n******* Testing copy constructor *******" << std::endl;

    Array<int> copyConst(intArray);
    for (int i = 0; i < 3; i++)
    {
        std::cout << copyConst[i] << std::endl;
    }

    std::cout << "\n******* Testing construction by copy assignment operator *******" << std::endl;

    Array<int> copyConst2 = intArray;
    for (int i = 0; i < 3; i++)
    {
        std::cout << copyConst2[i] << std::endl;
    }

    std::cout << "\n******* Testing integer subscrit operator *******" << std::endl;
    try {
        intArray[5] = 15;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n******* Testing string arrays *******" << std::endl;

    Array<std::string> strArray(3);
    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "kkkk";

    for (int i = 0; i < 3; i++)
    {
        std::cout << strArray[i] << std::endl;
    }
    
    std::cout << "\n******* Testing string copy constructor *******" << std::endl;

    Array<std::string> copyConstStr(strArray);
    for (int i = 0; i < 3; i++)
    {
        std::cout << copyConstStr[i] << std::endl;
    }

    std::cout << "\n******* Testing string subscrit operator *******" << std::endl;
    try {
        strArray[5] = "Maybe gonna fail";
    }
    catch (std::exception & e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}