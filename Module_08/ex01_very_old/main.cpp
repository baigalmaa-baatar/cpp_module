/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:31:39 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/04 17:20:03 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (void)
{
	Span	span(5);

	span.addNumber(658);
	span.addNumber(45);
	span.addNumber(62);
	span.addNumber(77);
	span.addNumber(34);
	try{
		span.addNumber(98);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try{
		span.addNumber(28);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "The shortest number in Span is " << span.shortestSpan() << std::endl;
	std::cout << "The longest number in Span is " << span.longestSpan() << std::endl;

	std::cout << std::endl << "---Span---" << std::endl;
	span.display();
	std::cout << std::endl;


	Span	emptySpan;
	try{
		emptySpan.shortestSpan();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try{
		emptySpan.longestSpan();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "---Empty Span---" << std::endl;	
	emptySpan.display();

	std::cout << std::endl << "----Main Subject----" << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

/*
	std::cout << std::endl << "---Another test haha---" << std::endl;
	Span sp2 = Span(10000);
	std::cout << "We just created a span with N = 1000" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Let's add the numbers (in one function call)!" << std::endl;
	sp2.SpanRangeIt(0, 9999);
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Let's display the span" << std::endl;
	sp2.display();
	std::cout << "-------------------------------" << std::endl;

*/
	return (0);
}
