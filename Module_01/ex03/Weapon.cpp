/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:01:34 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/06 19:01:38 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    _type = type;
}

Weapon::~Weapon()
{
    std::cout << _type << " has destructed." << std::endl;
}

const std::string&  Weapon::getType(void) const {
    return _type;
}

void  Weapon::setType(std::string type){
    _type = type;
}