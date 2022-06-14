/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:17:59 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/14 14:18:01 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain (void) {
    std::cout << "Brain constructor has called." << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = "Eat";
    }
    return ;
}

Brain::Brain(Brain & obj) {
    std::cout << "Copy Constructor Brain called." << std::endl;
    *this = obj;
    return ;
}

Brain & Brain::operator=(Brain & obj) {
    std::cout << "Copy Assignment Brain operator called" << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        this->setIdeas(i, obj.getIdeas(i));
    }
    return *this;
}

Brain:: ~Brain(void) {
    std::cout << "Destructor Brain called." << std::endl;
    return ;
 }

const std::string& Brain::getIdeas(int index) const {
     return _ideas[index];
 }

void Brain::setIdeas(int index, const std::string& str) {
    _ideas[index] = str;
 }