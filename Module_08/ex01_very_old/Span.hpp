/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:42:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/04 16:54:38 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

#include <stdexcept>
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class	Span
{
	public:
			//Constructor
			Span(void);							//canonical constructeur par defaut
			Span(unsigned int n);
			Span(Span const & rhs);			//canonical constructeur de recopie
	
			//Fonction
			Span			&operator= ( const Span & rhs);	//canonical surcharge de l'operation d'affectation
			unsigned int	getSize(void) const { return (this->size); } 
			void			addNumber(int n);
			int				shortestSpan(void);
			int				longestSpan(void);
			void			SpanRangeIt(int a, int b);
			void			display(void) const;

			
			//Destructeur
			~Span(void);							//canonical destructeur

			class AlreadyFill: public std::exception
			{
				virtual const char * what() const throw()
				{
					return ("This Span is already fill");
				}
			};
			class NotFound: public std::exception
			{
				virtual const char * what() const throw()
				{
					return ("This Span no numbers stored, no distance can be found");
				}
			};

	protected:

	private:
	
	unsigned int		size;
	std::vector<int>	vec;
	
};

	std::ostream & operator << (std::ostream & sortie, const Span & rhs);

# endif
