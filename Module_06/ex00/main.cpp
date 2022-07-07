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

#define TYPE_CHAR	1
#define TYPE_INT	2
#define TYPE_POINT	3
#define TYPE_NON	4
#define TYPE_ERR	5

/*

./convert 0	->okay
./convert a	->okay
./convert +inf	->okay
./convert 42.0f	->okay
./convert 42	->okay

*/

int	getType(std::string& str, int& nbr)
{
	int flag_point = 0;
	int flag_plus_minus = 0;

	//Check if str is char
	if (str.length() == 1 && (str[0] < '0' || str[0] < '9'))
		return TYPE_CHAR;

	//Check if str is +inf nan etc
	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan" )
		return TYPE_NON;

	//Check if str is float or double
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '+' || str[i] == '-')
			flag_plus_minus++;
		if (str[i] == '.')
			flag_point++;
	}
	if (flag_point == 1 && (flag_plus_minus == 0 || flag_plus_minus == 1))
		return TYPE_POINT;
	else if (flag_point > 1 || flag_plus_minus > 1)
		return TYPE_ERR;
	
	//Check if str is int
	flag_plus_minus = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '+' || str[i] == '-')
			flag_plus_minus++;
        if (str[i] < '0' && str[i] > '9')
			break;
    }
	if (str.length() == i && (flag_plus_minus == 0 || flag_plus_minus == 1))
		return TYPE_INT;
	// else if (str.length() != i && (flag_point > 1 || flag_plus_minus > 1))
	// 	return TYPE_ERR;
	return TYPE_ERROR;
}

int	main(int argc, char *argv[]){

	if (argc != 2)
	{
		std::cout << "Enter a number or a character\n" << std::endl;
		return 1;
	}
	std::string str = argv[1];
	int	nbr;
	int	type;
	type = getType(str, nbr);
	


	return 0;
}