/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:38:18 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/04 17:38:20 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie( std::string name );
        ~Zombie();
        void    announce(void);

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
