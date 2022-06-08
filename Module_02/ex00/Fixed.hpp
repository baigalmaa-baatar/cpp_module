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

class Fixed {
    private:
        int fix_nbr;
        static int const nbr_fracbits;

    public:
        Fixed(int fix_nbr = 0);                     //A default constructor
        Fixed(const Fixed& obj);                //A copy constructor
        Fixed operator + (const Fixed& obj)     //A copy assignment operator overload
        ~Fixed();                               //A destructor
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif
