/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:19:34 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/08 19:19:35 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
    private:
        int _raw;
        static int const _nbr_fracbits = 8;

    public:
        Fixed();                 
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed(const Fixed& obj);               
        Fixed& operator=(const Fixed& obj);      
        ~Fixed();                              
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        // 6 comparison operators: >, <, >=, <=, == and !=
        bool operator>(const Fixed& obj) const;
        bool operator<(const Fixed& obj) const;
        bool operator>=(const Fixed& obj) const;
        bool operator<=(const Fixed& obj) const;

        bool operator==(const Fixed& obj) const;

        bool operator!=(const Fixed& obj) const;
        
        // 4 arithmetic operators: +, -, *, and /
        Fixed operator+(const Fixed& obj) const;
        Fixed operator-(const Fixed& obj) const;
        Fixed operator*(const Fixed& obj) const;
        Fixed operator/(const Fixed& obj) const;

        // 4 increment/decrement ++obj, --obj, obj++, obj--
        Fixed& operator++(void);
        Fixed& operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);

        //4 public overloaded member functions min, max
        static Fixed& min( Fixed& obj1, Fixed& obj2);
        static Fixed const & min( Fixed const & obj1, Fixed const & obj2 );
        static Fixed& max( Fixed& obj1, Fixed& obj2);
        static Fixed const & max( Fixed const & obj1, Fixed const & obj2 );
};

std::ostream& operator<<(std::ostream& os, const Fixed &obj);
//checking something
#endif
