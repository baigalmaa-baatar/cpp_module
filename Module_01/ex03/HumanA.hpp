/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:01:07 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/06 19:01:08 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon& _weapon;
    
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void    attack(void) const;
};

#endif
