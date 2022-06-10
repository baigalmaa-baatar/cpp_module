/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:23:26 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/10 11:23:27 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("anon"), _hit_points (10), _energy_points (10), _attack_damage_points(0) {
    std::cout << "Default constructor has called." << std::endl;
    return ;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name),_hit_points (10), _energy_points (10), _attack_damage_points(0){
    std::cout << "Constructor ClapTrap has called." << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap& obj){
    std::cout << "Copy constructor called." << std::endl;
    *this = obj;
    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap & obj) {
    std::cout << "Copy assignment operator called." << std::endl;
    this->_name = obj.getName();
    this->_hit_points = obj.getHitPoints();
    this->_energy_points = obj.getEnergyPoints();
    this->_attack_damage_points = obj.getAttackPoints();

    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called." << std::endl;
    return ;
}

/*--------------------------------------------------
 ---------------Getter functions--------------------
---------------------------------------------------*/

const std::string& ClapTrap::getName(void) const {
    return _name;
}

unsigned int ClapTrap::getHitPoints(void) const {
    return _hit_points;
}

unsigned int ClapTrap::getEnergyPoints(void) const {
    return _energy_points;
}

unsigned int ClapTrap::getAttackPoints(void) const {
    return _attack_damage_points;
}

/*--------------------------------------------------
 ---------------Function members--------------------
---------------------------------------------------*/

void    ClapTrap::attack(const std::string& target){
    if (_hit_points < 1 || _energy_points < 1)
        std::cout << "There's not enought hit points or energy points to attack!" << std::endl;
    _energy_points -= 1;
    std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attack_damage_points <<  " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){

    if (_hit_points < 1 || _energy_points < 1)
        std::cout << _name << "There's not enought energy points to take damage!" << std::endl;
    _hit_points -= amount;
    std::cout << "Hit point is now: " << _hit_points << std::endl;
    _energy_points -= 1;
    std::cout << "Energy point is now: " << _energy_points << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){

    if (_hit_points < 1 || _energy_points < 1)
        std::cout << _name << "There's not enought energy points to be repaired!" << std::endl;
    _hit_points += amount;
    std::cout << "Hit point is now: " << _hit_points << std::endl;
    _energy_points -= 1;
    std::cout << "Energy point is now: " << _energy_points << std::endl;
}

/*--------------------------------------------------
 -----------Additional function for the info--------
---------------------------------------------------*/

void    ClapTrap::info(void){

    std::cout << "name: " << this->getName() << std::endl;
    std::cout << "hitpoints: " << this->getHitPoints() << std::endl;
    std::cout << "energyPoints: " << this->getEnergyPoints() << std::endl;
    std::cout << "attackDamage: " << this->getAttackPoints() << std::endl;
    return ;
}
