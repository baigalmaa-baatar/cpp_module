/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:41:47 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/07 15:41:49 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3

class Harl
{
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
    public:
        Harl();
        ~Harl();
        void    complain( std::string level );
};

#endif
