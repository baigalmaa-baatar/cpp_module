/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:08:32 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/05 18:08:33 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
	/* generate secret number between 0 to 2: */
	int random_int = std::rand() % 3;
	Base* base;

	switch (random_int)
	{
		case 0:
			base = new A;
			std::cout << "Generated : A" << std::endl;
			break;
		case 1:
			base = new B;
			std::cout << "Generated : B" << std::endl;
			break;
		case 2:
			base = new C;
			std::cout << "Generated : C" << std::endl;
			break;
		default:
			base = NULL;
	}
	return base;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
	{
		std::cout << "This is A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "This is B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "This is C" << std::endl;
	}
}

void identify(Base& p) {
	try
	{
		//You can write as shown
		// A &a = dynamic_cast<A&>(p);
		// (void)a;
		//or :
		(void)dynamic_cast<A&>(p);
		std::cout << "This is A" << std::endl;
		return ;
	}
	catch(std::exception &bc){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "This is B" << std::endl;
		return ;
	}
	catch(std::exception &bc){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "This is C" << std::endl;
		return ;
	}
	catch(std::exception &bc){}
}

int	main(void){

	/* initialize random seed: */
	std::srand (time(NULL));

	std::cout << "****************** Generating ******************" << std::endl;
	Base *base = generate();

	std::cout << "****************** Identifying by pointer ******************" << std::endl;
	identify(base);

	std::cout << "****************** Identifying by reference ******************" << std::endl;
	identify(*base);
	
	//Deleting new allocation
	delete base;

	return (0);
}
