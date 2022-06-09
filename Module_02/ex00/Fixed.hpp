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

class Fixed {
    private:
        int _raw;
        static int const _nbr_fracbits = 8;

    public:
        Fixed();                 //A default constructor
        Fixed(const Fixed& obj);                //A copy constructor
        Fixed& operator=(const Fixed& obj);      //A copy assignment operator overload
        ~Fixed();                               //A destructor
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif
