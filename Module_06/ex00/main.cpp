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

int	main(int argc, char *argv[]){

	if (argc != 2)
	{
		std::cout << "Enter any number/char\n" << std::endl;
		return 1;
	}
	std::string str = argv[1];
	if (argv[1])

	return 0;
}