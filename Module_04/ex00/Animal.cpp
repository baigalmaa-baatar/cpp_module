/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:23:26 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/10 11:23:27 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default type") {
    std::cout << "Animal constructor has called." << std::endl;
    return ;
}

Animal::Animal(const std::string& type) : _type(type) {
    std::cout << "Constructor Animal with type parameter has called." << std::endl;
    return ;
}

Animal::Animal(Animal const & obj){
    std::cout << "Copy Constructor Animal  called." << std::endl;
    *this = obj;
    return ;
}

Animal & Animal::operator=(const Animal & obj) {
    std::cout << "Copy Assignment Animal operator called." << std::endl;
    this->_type = obj.getType();
    return *this;
}

Animal::~Animal() {
    std::cout << "Destructor Animal called." << std::endl;
    return ;
}

/*--------------------------------------------------
 ---------------Getter Setter functions--------------------
---------------------------------------------------*/

std::string Animal::getType(void) const {
    return _type;
}

void    Animal::setType(std::string type) {
    _type = type;
    return ;
}


/*--------------------------------------------------
 ---------------Function members--------------------
---------------------------------------------------*/

void    Animal::makeSound(void) const {

    std::cout << this->getType() << ": tsktsktsk" << std::endl;
    return ;
}
