/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:23:10 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/10 11:23:13 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {

    ScavTrap a;
    a.info();
    a.takeDamage(30);
    a.info();
 
    std::cout << "------------------------------" << std::endl;

    ScavTrap b(a);
    b.info();
    b.takeDamage(30);
    b.info();

    std::cout << "------------------------------" << std::endl;

    ScavTrap c;
    c = b;
    c.info();
    b.takeDamage(30);

    std::cout << "------------------------------" << std::endl;

    ScavTrap d("lalala");
    d.attack("coco");
    d.takeDamage(40);
    d.beRepaired(100);
    d.guardGate();
    d.info();

    return 0;
}
