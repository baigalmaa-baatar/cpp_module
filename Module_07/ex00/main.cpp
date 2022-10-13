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
#include "whatever.hpp"

int main(void)
{
    int a = 2;
    int b = 3;

    ft::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ft::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ft::max(a, b) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    ft::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ft::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ft::max(c, d) << std::endl;
    return 0;
}