/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:19:40 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/08 19:19:42 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Fixed.hpp"

// int main( void ) {
    
//     Fixed a;
//     Fixed const b( Fixed( 5.05f )*Fixed( 2 ) );

//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     std::cout << Fixed::max( a, b ) << std::endl;
//     std::cout << Fixed::min( a, b ) << std::endl;
//     // std::cout << "min(a, c) :" << Fixed::min(a, b) << std::endl;

//     return 0;
// }



#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "Start test" << std::endl;
    std::cout << "***********************************************" << std::endl;
    std::cout << "*                                             *" << std::endl;
    std::cout << "*        Simple operations such as ++         *" << std::endl;
    std::cout << "*                                             *" << std::endl;
    std::cout << "***********************************************" << std::endl;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << "***********************************************" << std::endl;
    std::cout << "*                                             *" << std::endl;
    std::cout << "*        Simple operations such as --         *" << std::endl;
    std::cout << "*                                             *" << std::endl;
    std::cout << "***********************************************" << std::endl;
    
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << --a << std::endl;

    a = Fixed(0);
    Fixed c(1.5f);
    std::cout << "***********************************************" << std::endl;
    std::cout << "*                                             *" << std::endl;
    std::cout << "*        Operations such as a+c               *" << std::endl;
    std::cout << "*                                             *" << std::endl;
    std::cout << "***********************************************" << std::endl;  
    std::cout << "a:" << a << std::endl;
    std::cout << "c:" << c << std::endl;
    std::cout << "a + c:" << a + c << std::endl;
    std::cout << "c + a:" << c + a << std::endl;
    std::cout << "a - c:" << a - c << std::endl;
    std::cout << "c - a:" << c - a << std::endl;
    std::cout << "a * c:" << a * c << std::endl;
    std::cout << "c * a:" << c * a << std::endl;
    std::cout << "a / c:" << a / c << std::endl;
    std::cout << "a < c :" << (a < c) << std::endl;
    std::cout << "c < a :" << (c < a) << std::endl;
    std::cout << "a > c :" << (a > c) << std::endl;
    std::cout << "c > a :" << (c > a) << std::endl;
    std::cout << "a <= c :" << (a <= c) << std::endl;
    std::cout << "c <= a :" << (c <= a) << std::endl;
    std::cout << "a >= c :" << (a >= c) << std::endl;
    std::cout << "c >= a :" << (c >= a) << std::endl;
    std::cout << "***********************************************" << std::endl;
    std::cout << "*                                             *" << std::endl;
    std::cout << "*        Operations such as a==c               *" << std::endl;
    std::cout << "*                                             *" << std::endl;
    std::cout << "***********************************************" << std::endl;  
    std::cout << "a:" << a << std::endl;
    std::cout << "a == c :" << (a == c) << std::endl;
    std::cout << "c == a :" << (c == a) << std::endl;
    std::cout << "a != c :" << (a != c) << std::endl;
    std::cout << "c != a :" << (c != a) << std::endl;
    std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
    std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
    a = Fixed(2.5f);
    std::cout << "a:" << a << std::endl;
    std::cout << "c:" << c << std::endl;
    std::cout << "a + c:" << a + c << std::endl;
    std::cout << "c + a:" << c + a << std::endl;
    std::cout << "a - c:" << a - c << std::endl;
    std::cout << "c - a:" << c - a << std::endl;
    std::cout << "a * c:" << a * c << std::endl;
    std::cout << "c * a:" << c * a << std::endl;
    std::cout << "a / c:" << a / c << std::endl;
    std::cout << "c / a:" << c / a << std::endl;
    std::cout << "a < c :" << (a < c) << std::endl;
    std::cout << "c < a :" << (c < a) << std::endl;
    std::cout << "a > c :" << (a > c) << std::endl;
    std::cout << "c > a :" << (c > a) << std::endl;
    std::cout << "a <= c :" << (a <= c) << std::endl;
    std::cout << "c <= a :" << (c <= a) << std::endl;
    std::cout << "a >= c :" << (a >= c) << std::endl;
    std::cout << "c >= a :" << (c >= a) << std::endl;
    std::cout << "a == c :" << (a == c) << std::endl;
    std::cout << "c == a :" << (c == a) << std::endl;
    std::cout << "a != c :" << (a != c) << std::endl;
    std::cout << "c != a :" << (c != a) << std::endl;
    std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
    std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
    a = Fixed(-2.5f);
    std::cout << "a:" << a << std::endl;
    std::cout << "c:" << c << std::endl;
    std::cout << "a + c:" << a + c << std::endl;
    std::cout << "c + a:" << c + a << std::endl;
    std::cout << "a - c:" << a - c << std::endl;
    std::cout << "c - a:" << c - a << std::endl;
    std::cout << "a * c:" << a * c << std::endl;
    std::cout << "c * a:" << c * a << std::endl;
    std::cout << "a / c:" << a / c << std::endl;
    std::cout << "c / a:" << c / a << std::endl;
    std::cout << "a < c :" << (a < c) << std::endl;
    std::cout << "c < a :" << (c < a) << std::endl;
    std::cout << "a > c :" << (a > c) << std::endl;
    std::cout << "c > a :" << (c > a) << std::endl;
    std::cout << "a <= c :" << (a <= c) << std::endl;
    std::cout << "c <= a :" << (c <= a) << std::endl;
    std::cout << "a >= c :" << (a >= c) << std::endl;
    std::cout << "c >= a :" << (c >= a) << std::endl;
    std::cout << "a == c :" << (a == c) << std::endl;
    std::cout << "c == a :" << (c == a) << std::endl;
    std::cout << "a != c :" << (a != c) << std::endl;
    std::cout << "c != a :" << (c != a) << std::endl;
    std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
    std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
    c = Fixed(-5.2f);
    std::cout << "a:" << a << std::endl;
    std::cout << "c:" << c << std::endl;
    std::cout << "a + c:" << a + c << std::endl;
    std::cout << "c + a:" << c + a << std::endl;
    std::cout << "a - c:" << a - c << std::endl;
    std::cout << "c - a:" << c - a << std::endl;
    std::cout << "a * c:" << a * c << std::endl;
    std::cout << "c * a:" << c * a << std::endl;
    std::cout << "a / c:" << a / c << std::endl;
    std::cout << "c / a:" << c / a << std::endl;
    std::cout << "a < c :" << (a < c) << std::endl;
    std::cout << "c < a :" << (c < a) << std::endl;
    std::cout << "a > c :" << (a > c) << std::endl;
    std::cout << "c > a :" << (c > a) << std::endl;
    std::cout << "a <= c :" << (a <= c) << std::endl;
    std::cout << "c <= a :" << (c <= a) << std::endl;
    std::cout << "a >= c :" << (a >= c) << std::endl;
    std::cout << "c >= a :" << (c >= a) << std::endl;
    std::cout << "a == c :" << (a == c) << std::endl;
    std::cout << "c == a :" << (c == a) << std::endl;
    std::cout << "a != c :" << (a != c) << std::endl;
    std::cout << "c != a :" << (c != a) << std::endl;
    std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
    std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
    c = Fixed(2.2f);
    std::cout << "a:" << a << std::endl;
    std::cout << "c:" << c << std::endl;
    std::cout << "a + c:" << a + c << std::endl;
    std::cout << "c + a:" << c + a << std::endl;
    std::cout << "a - c:" << a - c << std::endl;
    std::cout << "c - a:" << c - a << std::endl;
    std::cout << "a * c:" << a * c << std::endl;
    std::cout << "c * a:" << c * a << std::endl;
    std::cout << "a / c:" << a / c << std::endl;
    std::cout << "c / a:" << c / a << std::endl;
    std::cout << "a < c :" << (a < c) << std::endl;
    std::cout << "c < a :" << (c < a) << std::endl;
    std::cout << "a > c :" << (a > c) << std::endl;
    std::cout << "c > a :" << (c > a) << std::endl;
    std::cout << "a <= c :" << (a <= c) << std::endl;
    std::cout << "c <= a :" << (c <= a) << std::endl;
    std::cout << "a >= c :" << (a >= c) << std::endl;
    std::cout << "c >= a :" << (c >= a) << std::endl;
    std::cout << "a == c :" << (a == c) << std::endl;
    std::cout << "c == a :" << (c == a) << std::endl;
    std::cout << "a != c :" << (a != c) << std::endl;
    std::cout << "c != a :" << (c != a) << std::endl;
    std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
    std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
    c = Fixed(-2.6f);
    std::cout << "a:" << a << std::endl;
    std::cout << "c:" << c << std::endl;
    std::cout << "a + c:" << a + c << std::endl;
    std::cout << "c + a:" << c + a << std::endl;
    std::cout << "a - c:" << a - c << std::endl;
    std::cout << "c - a:" << c - a << std::endl;
    std::cout << "a * c:" << a * c << std::endl;
    std::cout << "c * a:" << c * a << std::endl;
    std::cout << "a / c:" << a / c << std::endl;
    std::cout << "c / a:" << c / a << std::endl;
    std::cout << "a < c :" << (a < c) << std::endl;
    std::cout << "c < a :" << (c < a) << std::endl;
    std::cout << "a > c :" << (a > c) << std::endl;
    std::cout << "c > a :" << (c > a) << std::endl;
    std::cout << "a <= c :" << (a <= c) << std::endl;
    std::cout << "c <= a :" << (c <= a) << std::endl;
    std::cout << "a >= c :" << (a >= c) << std::endl;
    std::cout << "c >= a :" << (c >= a) << std::endl;
    std::cout << "a == c :" << (a == c) << std::endl;
    std::cout << "c == a :" << (c == a) << std::endl;
    std::cout << "a != c :" << (a != c) << std::endl;
    std::cout << "c != a :" << (c != a) << std::endl;
    std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
    std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
    c = Fixed(-2.5f);
    std::cout << "a:" << a << std::endl;
    std::cout << "c:" << c << std::endl;
    std::cout << "a + c:" << a + c << std::endl;
    std::cout << "c + a:" << c + a << std::endl;
    std::cout << "a - c:" << a - c << std::endl;
    std::cout << "c - a:" << c - a << std::endl;
    std::cout << "a * c:" << a * c << std::endl;
    std::cout << "c * a:" << c * a << std::endl;
    std::cout << "a / c:" << a / c << std::endl;
    std::cout << "c / a:" << c / a << std::endl;
    std::cout << "a < c :" << (a < c) << std::endl;
    std::cout << "c < a :" << (c < a) << std::endl;
    std::cout << "a > c :" << (a > c) << std::endl;
    std::cout << "c > a :" << (c > a) << std::endl;
    std::cout << "a <= c :" << (a <= c) << std::endl;
    std::cout << "c <= a :" << (c <= a) << std::endl;
    std::cout << "a >= c :" << (a >= c) << std::endl;
    std::cout << "c >= a :" << (c >= a) << std::endl;
    std::cout << "a == c :" << (a == c) << std::endl;
    std::cout << "c == a :" << (c == a) << std::endl;
    std::cout << "a != c :" << (a != c) << std::endl;
    std::cout << "c != a :" << (c != a) << std::endl;
    std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
    std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
    a = Fixed(100000.2f);
    c = Fixed(-24444.1f);
    std::cout << "a:" << a << std::endl;
    std::cout << "c:" << c << std::endl;
    std::cout << "a + c:" << a + c << std::endl;
    std::cout << "c + a:" << c + a << std::endl;
    std::cout << "a - c:" << a - c << std::endl;
    std::cout << "c - a:" << c - a << std::endl;
    std::cout << "a * c:" << a * c << std::endl;
    std::cout << "c * a:" << c * a << std::endl;
    std::cout << "a / c:" << a / c << std::endl;
    std::cout << "c / a:" << c / a << std::endl;
    std::cout << "a < c :" << (a < c) << std::endl;
    std::cout << "c < a :" << (c < a) << std::endl;
    std::cout << "a > c :" << (a > c) << std::endl;
    std::cout << "c > a :" << (c > a) << std::endl;
    std::cout << "a <= c :" << (a <= c) << std::endl;
    std::cout << "c <= a :" << (c <= a) << std::endl;
    std::cout << "a >= c :" << (a >= c) << std::endl;
    std::cout << "c >= a :" << (c >= a) << std::endl;
    std::cout << "a == c :" << (a == c) << std::endl;
    std::cout << "c == a :" << (c == a) << std::endl;
    std::cout << "a != c :" << (a != c) << std::endl;
    std::cout << "c != a :" << (c != a) << std::endl;
    std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
    std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;

    return 0;
}
