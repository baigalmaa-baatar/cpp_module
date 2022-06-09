/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:19:28 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/08 19:19:30 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr) {
    std::cout << "Int constructor called" << std::endl;
    _raw = static_cast<int>(roundf(nbr * (1 << _nbr_fracbits)));
}

Fixed::Fixed(const float nbr) {
    std::cout << "Int constructor called" << std::endl;
    _raw = static_cast<int>(roundf(nbr * (1 << _nbr_fracbits)));
}

Fixed::Fixed(const Fixed& obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj){
    std::cout << "Copy assignment operator called" << std::endl;
    _raw = obj.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    _raw= raw;
}


float	Fixed::toFloat(void) const
{
	return ((float)this->_raw / (float)(1 << this->_nbr_fracbits));
}

int	Fixed::toInt(void) const
{
	return (this->_raw >> _nbr_fracbits);	//convert float ot int
}

std::ostream& operator<<(std::ostream& os, const Fixed &a)
{
    os << a.toFloat();
    return os;
}
