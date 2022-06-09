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
};
std::ostream& operator<<(std::ostream& os, const Fixed &obj);

#endif
