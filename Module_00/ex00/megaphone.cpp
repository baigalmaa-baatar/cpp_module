/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:00:15 by bbaatar           #+#    #+#             */
/*   Updated: 2022/05/31 16:00:17 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
    int i, j;

    i = 1;
    j = 0;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        while(argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                putwchar(toupper(argv[i][j]));
                j++;
            }
            i++;
        }
        putwchar('\n');
    }
    return 0;
}
