/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:38:40 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/08 10:38:41 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <stdexcept>
# include <ctype.h>
# include <climits>

class Convert {
	private:
		char        *_str;
		char        _c;
		int			_i;
		float		_f;
		double		_d;

	public:
			Convert(void);                              //Canonical default constructor
			Convert(char *str);                        //Canonical parameterized constructor
			Convert(Convert const & obj);               //Canonical copy constructor
	
			Convert		&operator= ( const Convert & obj); //Canonical copy assignment operator

            ~Convert(void);                             //Canonical destructor
			
            //*******************************************************
            //***************** Getters and setters *****************
            //*******************************************************

			char		*getStr(void) const;
			char		getChar(void) const;
			int			getInt(void) const;
			float		getFloat(void) const;
			double		getDouble(void) const;

            //*******************************************************
            //***************** Conversion functions ****************
            //*******************************************************
			
			char		convertToChar(void);
			int			convertToInt(void);
			float		convertToFloat(void);
			double		convertToDouble(void);
			
		    //*******************************************************
            //*****************Exception classes*********************
            //*******************************************************

            class ConversionNotPossible : public std::exception {
                // private:
                //     const char* _message;
                public:
                    // explicit    ConversionNotPossible(const char* message);
                    virtual const char * what() const throw()
		            { 
			            return ("Conversin is not possible");
		            }
            };

            class NondDisplayable : public std::exception {
                // private:
                    // const char* _message;
                public:
                    // explicit    ConversionNotPossible(const char* message);
                    virtual const char * what() const throw()
		            { 
			            return ("Non displayable");
		            }
            };
};

// For print out the conversion results
std::ostream & operator << (std::ostream & os, Convert & obj);

#endif
