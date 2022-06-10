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

#include "ClapTrap.hpp"

int main() {

    // ClapTrap boss("boss");
    // ClapTrap bamboo("bamboo");

    // boss.attack("bamboo");
    // bamboo.beRepaired(10);
    
    ClapTrap a;
    a.info();
    a.takeDamage(3);
    a.info();
 
    std::cout << "------------------------------" << std::endl;

    ClapTrap b(a);
    b.info();
    b.takeDamage(3);
    b.info();

    std::cout << "------------------------------" << std::endl;

    ClapTrap c;
    c = b;
    c.info();
    b.takeDamage(3);

    std::cout << "------------------------------" << std::endl;

    ClapTrap d("lalala");
    d.attack("coco");
    d.takeDamage(4);
    d.beRepaired(10);
    d.info();

    return 0;
}
