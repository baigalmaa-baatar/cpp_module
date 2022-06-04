/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:37:48 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/04 17:37:49 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *zombie;
    std::string z;

    z = "New Zombie";
    zombie = newZombie(z);
    newZombie(z)->announce();
    
    z = "Random Chump";
    randomChump(z);

    delete zombie;
    return(0);
}
