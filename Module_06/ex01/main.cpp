/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:45:37 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/05 17:45:39 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data {
	int	x;
	int	y;
};

std::uintptr_t	serialize(Data* ptr){
	return reinterpret_cast<std::uintptr_t> (ptr);
}

Data*	deserialize(uintptr_t raw){
	return reinterpret_cast<Data*> (raw);
}

int	main(void){

	Data	d;
	
	d.x = 42;
	d.y = 21;

	std::cout << "x is:" << d.x << std::endl;
	std::cout << "y is:" << d.y << std::endl;
	std::cout << "data's pointer address is :" << &d << std::endl;

	std::uintptr_t raw =  serialize(&d);
	Data* ptr = deserialize(raw);

	std::cout << "x is:" << ptr->x << std::endl;
	std::cout << "y is:" << ptr->y << std::endl;
	std::cout << "data's pointer address is :" << ptr << std::endl;

	return 0;
}
