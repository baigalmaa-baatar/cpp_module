/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:32:24 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/10 21:32:25 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    private:

    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(ScavTrap& obj);
        ~ScavTrap();
        
        ScavTrap & operator=(ScavTrap & obj);

        void guardGate();
};

#endif 
