/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:54:40 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/11 11:54:41 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap (), _highFives(false) {
    std::cout << "Default FragTrap constructor has called." << std::endl;
    this->_name = "FragTrap anon";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage_points = 30;
    return ;
}

FragTrap::FragTrap( std::string name) : ClapTrap (name), _highFives(false) {
    std::cout << "Constructor FragTrap has called." << std::endl;
    this->_name = "FragTrap anon";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage_points = 30;
    return ;
}

FragTrap::FragTrap(FragTrap const & obj) : ClapTrap (obj) {
    *this = obj;
    return ;
}

FragTrap & FragTrap::operator=(const FragTrap & obj) {
    
    ClapTrap::operator=(obj);
    this->_highFives = obj.getHhighFive();
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "Destructor FragTrap called." << std::endl;
    return ;
}

void    FragTrap::highFivesGuys(void) {
    if (_hit_points < 1 || _energy_points < 1)
        std::cout << "There's not enought hit points or energy points to get a High Five!" << std::endl;
    if (_highFives == true)
        std::cout << this->getName() << " did High Five!" << std::endl;
    return ;
}   

int     FragTrap::getHhighFive(void) const {
    return _highFives;
}

void    FragTrap::setHighFive(bool highFives) {
    _highFives = highFives;
}
