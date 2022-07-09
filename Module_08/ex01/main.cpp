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
#include <vector>    // std::vector
#include "Span.hpp"

int main()
{
    std::cout << "\n *********** Test with 5 elements *********** \n" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n *********** Test with 4 elements *********** \n" << std::endl;
    Span sp1 = Span(4);
    sp1.addNumber(6);
    sp1.addNumber(3);
    sp1.addNumber(-17);
    sp1.addNumber(5);
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;

    std::cout << "\n *********** Try overflow *********** \n" << std::endl;
    try{
        sp1.addNumber(10); //error message -r Google dej uzeh
    }
    catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n *********** Try with ranger numbers (just 100) *********** \n" << std::endl;
    {
        Span sp = Span(100);
        std::vector<int> vector1(99, 2);
        sp.addNumber(vector1.begin(), vector1.end());
        sp.addNumber(100);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << "\n *********** Try with ranger numbers (just 100) *********** \n" << std::endl;
    {
        Span sp = Span(10000);
        std::vector<int> vec(9999, 2);
        sp.addNumber(vec.begin(), vec.end());
        sp.addNumber(100);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << "\n *********** Try with to find span with only 1 element *********** \n" << std::endl;
    {
        Span sp = Span(1);
        std::vector<int> vec(1, 2);
        sp.addNumber(vec.begin(), vec.end());
        try {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
        try {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
    }

    return 0;
}