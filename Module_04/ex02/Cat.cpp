/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:22:59 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/14 12:23:00 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal ("Cat") {
    std::cout << "Cat constructor has called." << std::endl;
    _cat_brain = new Brain();
    return ;
}

Cat::Cat(Cat const & obj) {
    std::cout << "Copy Constructor Cat called." << std::endl;
    *this = obj;
    return ;
}

Cat & Cat::operator=(const Cat & obj) {
    std::cout << "Copy Assignment Cat operator called." << std::endl;
    this->setType(obj.getType());
    return *this;
}

Cat::~Cat() {
    std::cout << "Destructor Cat called." << std::endl;
    delete _cat_brain;
    return ;
}

/*--------------------------------------------------
 ---------------Function members--------------------
---------------------------------------------------*/

void    Cat::makeSound(void) const {

    std::cout << this->_type << ": myaow myaow" << std::endl;
    return ;
}

const std::string& Cat::getBrain(int index) const {
    return _cat_brain->getIdeas(index);
}

void Cat::setBrain(int index, const std::string& str) {
    _cat_brain->setIdeas(index, str);
}