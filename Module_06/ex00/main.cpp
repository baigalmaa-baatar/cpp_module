/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:18:48 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/05 15:18:50 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Convert.hpp"

/*

./convert 0	->okay
./convert a	->okay
./convert +inf	->okay
./convert 42.0f	->okay
./convert 42	->okay

*/

int	main(int argc, char *argv[]){

	if (argc != 2)
	{
		std::cout << "Enter a number or a character\n" << std::endl;
		return 1;
	}
	Convert convert(argv[1]);

    std::cout << convert << std::endl;

	return 0;
}