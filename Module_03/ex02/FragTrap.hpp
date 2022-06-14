/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:54:45 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/11 11:54:46 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    private:
		  bool	_highFives;

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & obj);
        virtual ~FragTrap();
        
        FragTrap & operator=(const FragTrap & obj);

        void    highFivesGuys(void);
        int     getHhighFive(void) const;
        void     setHighFive(bool highFives) ;
};

#endif
