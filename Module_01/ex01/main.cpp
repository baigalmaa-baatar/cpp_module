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
    Zombie  zombie("Foo");
    Zombie  new_zombie("New Zombie");
    Zombie  randomChump("Random Chump");

    zombie.announce();
    new_zombie.announce();
    randomChump.announce();

    // delete newZombie("New Zombie");

    return(0);
}
