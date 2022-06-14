/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:15:34 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/14 12:15:35 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal ("WrongCat") {
    std::cout << "WrongCat constructor has called." << std::endl;
    return ;
}

WrongCat::WrongCat(WrongCat const & obj) {
    std::cout << "Copy Constructor WrongCat called." << std::endl;
    *this = obj;
    return ;
}

WrongCat & WrongCat::operator=(const WrongCat & obj) {
    std::cout << "Copy Assignment WrongCat operator called." << std::endl;
    this->setType(obj.getType());
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor WrongCat called." << std::endl;
    return ;
}

/*--------------------------------------------------
 ---------------Function members--------------------
---------------------------------------------------*/

void    WrongCat::makeSound(void) const {

    std::cout << this->_type << ": wrong wrong myaow myaow" << std::endl;
    return ;
}
