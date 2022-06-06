/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:01:11 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/06 19:01:13 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
    std::cout << _name << " has destructed." << std::endl;
}

void    HumanA::attack(void) const{

    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}