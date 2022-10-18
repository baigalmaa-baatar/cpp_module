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
#include "iter_test.hpp"

int main(void)
{
    std::cout << "\n******* Testing integer arrays *******" << std::endl;

    int array1[3] = {10, 20, 30};
    iter(array1, 3, func_output1<int>);

    std::cout << "\n******* Testing float arrays *******" << std::endl;

    float array2[3] = {10.01, 20.01, 30.01};
    iter(array2, 3, func_output1<float>);

    std::cout << "\n******* Testing string arrays *******" << std::endl;

    std::string array[3] = {"str0", "str1", "str2"};
    iter(array, 3, func_output1<std::string>);

    return 0;
}