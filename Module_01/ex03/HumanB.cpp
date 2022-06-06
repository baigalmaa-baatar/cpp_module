/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:01:22 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/06 19:01:24 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) 
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

HumanB::~HumanB()
{
    std::cout << _name << " has destructed." << std::endl;
}

void HumanB::attack()
{
    if (_weapon)
    {
        std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
    }
}