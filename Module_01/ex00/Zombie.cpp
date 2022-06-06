/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:38:24 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/04 17:38:26 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie(){
    std::cout << this->_name << " has destructed." << std::endl;
}

void    Zombie::announce(void){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
