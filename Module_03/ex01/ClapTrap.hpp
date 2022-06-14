    /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:23:20 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/10 11:23:22 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap {
    protected:                  //if it's private parameter, we can't use it in inherited classes.
        std::string  _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage_points;
        
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(ClapTrap const & obj);             //we should use const in C++ wherever possible so that objects are not accidentally modified
        
        ClapTrap & operator=(const ClapTrap & obj);     //we should use const in C++ wherever possible so that objects are not accidentally modified

        const std::string getName(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackPoints(void) const;

        void attack(const std::string target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void info(void);

        virtual ~ClapTrap();                    // Virtual technique that ensures only one copy of a base class's member variables are inherited by grandchild derived classes.
};

#endif
