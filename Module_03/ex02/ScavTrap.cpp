/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:32:29 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/10 21:32:30 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap (), _gate(false) {
    std::cout << "Default ScavTrap constructor has called." << std::endl;
    this->_name = "ScavTrap anon";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage_points = 20;
    return ;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap (name), _gate (false) {
    std::cout << "Constructor ScavTrap has called." << std::endl;
    this->_name = "ScavTrap anon";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage_points = 20;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & obj) : ClapTrap (obj) {
    *this = obj;
    return ;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & obj) {
    
    ClapTrap::operator=(obj);
    this->_gate = obj.getGate();
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "Destructor ScavTrap called." << std::endl;
    return ;
}

void    ScavTrap::attack(const std::string target) {

    if (_hit_points < 1 || _energy_points < 1)
        std::cout << "There's not enought hit points or energy points to attack!" << std::endl;
    _energy_points -= 1;
    std::cout << "ScavTrap " << _name << " attacks " << target << " , causing " << _attack_damage_points <<  " points of damage!" << std::endl;
    return ;
}
void    ScavTrap::guardGate(void) {
    if (_hit_points < 1 || _energy_points < 1)
        std::cout << "There's not enought hit points or energy points to get in Gate Mode" << std::endl;
    if (_gate)
        std::cout << this->getName() << " is in gate mode now" << std::endl;
    return ;
}   

int     ScavTrap::getGate(void) const {
    return _gate;
}