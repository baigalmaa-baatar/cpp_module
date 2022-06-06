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
    std::string zombieName;

    zombieName = "New Zombie";
    zombie = newZombie(zombieName);
    newZombie(zombieName)->announce();
    
    zombieName = "Random Chump";
    randomChump(zombieName);

    delete zombie;
    return(0);
}
