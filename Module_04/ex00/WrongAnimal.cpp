/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:15:22 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/14 12:15:23 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default type") {
    std::cout << "WrongAnimal constructor has called." << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type) {
    std::cout << "Constructor WrongAnimal with type parameter has called." << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & obj){
    std::cout << "Copy Constructor WrongAnimal  called." << std::endl;
    *this = obj;
    return ;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & obj) {
    std::cout << "Copy Assignment WrongAnimal operator called." << std::endl;
    this->_type = obj.getType();
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor WrongAnimal called." << std::endl;
    return ;
}

/*--------------------------------------------------
 ---------------Getter Setter functions--------------------
---------------------------------------------------*/

std::string WrongAnimal::getType(void) const {
    return _type;
}

void    WrongAnimal::setType(std::string type) {
    _type = type;
    return ;
}


/*--------------------------------------------------
 ---------------Function members--------------------
---------------------------------------------------*/

void    WrongAnimal::makeSound(void) const {

    std::cout << this->getType() << ": wrong wrong tsktsktsk" << std::endl;
    return ;
}
