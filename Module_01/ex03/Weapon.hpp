/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:01:30 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/06 19:01:31 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
    private:
        std::string _type;
    
    public:
        Weapon( std::string type );
        ~Weapon();
        const std::string&  getType() const;
        void    setType(std::string type);
};

#endif