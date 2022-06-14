/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:27:08 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/14 11:27:09 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal ("Dog") {
    std::cout << "Dog constructor has called." << std::endl;
    return ;
}

Dog::Dog(Dog const & obj) {
    std::cout << "Copy Constructor Dog called." << std::endl;
    *this = obj;
    return ;
}

Dog & Dog::operator=(const Dog & obj) {
    std::cout << "Copy Assignment Dog operator called." << std::endl;
    this->setType(obj.getType());
    return *this;
}

Dog::~Dog() {
    std::cout << "Destructor Dog called." << std::endl;
    return ;
}

/*--------------------------------------------------
 ---------------Function members--------------------
---------------------------------------------------*/

void    Dog::makeSound(void) const {

    std::cout << this->_type << ": oof oof" << std::endl;
    return ;
}
