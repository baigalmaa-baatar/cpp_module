/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:41:25 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/07 15:41:27 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]){
    
    Harl    harl;
    if (argc != 2)
    {
        std::cerr << "Insert either of these : DEBUG or INFO or WARNING or ERROR" << std::endl;
        std::exit(1);
    }
    std::string str_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int int_level = 4;
    for (int i = 0; i < 4; i++) {
        if (argv[1] == str_level[i])
        {
            int_level = i;
            break;
        }
    }
    switch (int_level) {
        case 0:
                harl.complain("DEBUG");
                break;
        case 1:
                harl.complain("INFO");
                break;
        case 2:
                harl.complain("WARNING");
                break;
        case 3:
                harl.complain("ERROR");
                break;
        default:
                std::cerr << "Insert either of these : DEBUG or INFO or WARNING or ERROR" << std::endl;
    }

    return 0;
}
