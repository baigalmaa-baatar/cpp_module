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
    private:
        std::string  _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage_points;
        
    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        ClapTrap(ClapTrap& obj);
        ~ClapTrap();
        
        ClapTrap & operator=(ClapTrap & obj);

        const std::string & getName(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackPoints(void) const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void info(void);
};

#endif
