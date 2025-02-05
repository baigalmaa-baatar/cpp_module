/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:12:20 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/06 15:12:21 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombies;
    std::string zombiesName = "Zombies_xyz";
    int N = 5;

    zombies = zombieHorde(N, zombiesName);
    for ( int i = 0; i < N; i++)
    {
        zombies[i].announce();
    }
    delete [] zombies;

    return 0;
}
