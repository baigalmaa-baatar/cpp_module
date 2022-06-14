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
    _dog_brain = new Brain();
    // for (int i; i < 100; i++)
    // {
    //     _dog_brain->getIdeas(i) = "Dog brain";
    // }
    return ;
}

Dog::Dog(Dog const & obj) {
    std::cout << "Copy Constructor Dog called." << std::endl;
    this->setType(obj.getType());
    _dog_brain = new Brain(*obj._dog_brain);
    return ;
}

Dog & Dog::operator=(const Dog & obj) {
    std::cout << "Copy Assignment Dog operator called." << std::endl;
    this->setType(obj.getType());
    delete this->_dog_brain;
    this->_dog_brain = new Brain(*obj._dog_brain);
    return *this;
}

Dog::~Dog() {
    std::cout << "Destructor Dog called." << std::endl;
    delete _dog_brain;
    return ;
}

/*--------------------------------------------------
 ---------------Function members--------------------
---------------------------------------------------*/

void    Dog::makeSound(void) const {

    std::cout << this->_type << ": oof oof" << std::endl;
    return ;
}

const std::string& Dog::getBrain(int index) const {
    return _dog_brain->getIdeas(index);
}

void Dog::setBrain(int index, const std::string& str) {
    _dog_brain->setIdeas(index, str);
}
