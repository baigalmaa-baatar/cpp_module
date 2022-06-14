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
		  bool	_gate;

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & obj);
        virtual ~ScavTrap();
        
        ScavTrap & operator=(const ScavTrap & obj);

        void    attack(const std::string target);
        void    guardGate(void);
        int     getGate(void) const;
};

#endif