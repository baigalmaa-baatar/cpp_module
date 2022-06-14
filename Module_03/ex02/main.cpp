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

#include "FragTrap.hpp"

int main() {

    FragTrap b;
    b.info();
    b.takeDamage(30);
    b.info();

    std::cout << "------------------------------" << std::endl;

    FragTrap c;
    c.info();
    c.takeDamage(30);

    std::cout << "------------------------------" << std::endl;

    FragTrap d("lalala");
    d.info();
    d.attack("coco");
    d.takeDamage(40);
    d.beRepaired(100);

    std::cout << "------------------------------" << std::endl;

    d.highFivesGuys();
    d.setHighFive(true);
    d.highFivesGuys();
    d.info();

    std::cout << "------------------------------" << std::endl;
    ClapTrap z;
    z.info();

    return 0;
}
