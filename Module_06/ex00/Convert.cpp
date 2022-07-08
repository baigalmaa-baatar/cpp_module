/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:38:45 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/08 10:38:46 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//Canonical default constructor
Convert::Convert(void)
{
    _str = NULL;
    return ;
}                   

//Canonical parameterized constructor
Convert::Convert(char *str) : _str(str)
{
    return ;
}

//Canonical copy constructor
Convert::Convert(Convert const & obj) {
    _str = obj._str;
    return ;
}      
	
//Canonical copy assignment operator
Convert & Convert::operator= ( const Convert & obj) {

    _str = getStr();
    _c = obj.getChar();
    _i = obj.getInt();
    _f = obj.getFloat();
    _d = obj.getDouble();

    return *this;
}

//Canonical destructor
Convert::~Convert(void) {
    return ;
}

//*******************************************************
//***************** Getters and setters *****************
//*******************************************************

char		*Convert::getStr(void) const { return _str;};
char		Convert::getChar(void) const{ return _c;};
int			Convert::getInt(void) const{ return _i;};
float		Convert::getFloat(void) const{ return _f;};
double		Convert::getDouble(void) const{ return _d;};


//*******************************************************
//***************** Conversion functions ****************
//*******************************************************

bool	isDigit(char *argv)
{
	int	i = 0;
	while (argv[i])
	{
		if (argv[i] != '.' && argv[i] != 'f' && argv[i] != '-' && isdigit(argv[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

char    Convert::convertToChar(void) {

    if (strlen(_str) == 1 && isalpha(_str[0]))
        return _str[0];
	else if (isDigit(this->_str) == true)
	{
		try{
			_c = convertToInt();
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		catch(std::invalid_argument & e) {
			throw Convert::ConversionNotPossible();
		}
		if (_c > 127 || _c < -128)
			throw Convert::ConversionNotPossible();
		if (isprint(_c) == 0)   // if it is printable or not
			throw Convert::NondDisplayable();
		return (static_cast<char>(_c));
	}
    //Have to check again
	if (_str[1]){
		throw Convert::ConversionNotPossible();
		return 0;
    }
	_c = static_cast<char>(_str[0]);
	if (_c > 127 || _c < -128)
		throw Convert::ConversionNotPossible();
	return 0;
}

int     Convert::convertToInt(void) {

    if (strlen(_str) == 1)
        _i = _str[0];
    else
        _i = static_cast<int>(std::strtol(_str, NULL, 10));
    try {
        if (_i >= INT_MAX && _i < INT_MIN)
            throw Convert::ConversionNotPossible();
        else
            return static_cast<int>(_i);
    }
    catch (std::invalid_argument & e)
    {
        throw Convert::ConversionNotPossible();
    }
    return 0;
}

float   Convert::convertToFloat(void) {
    
    try {
        if (strlen(_str) == 1)
            _f = _str[0];
        else
            _f = static_cast<float>(strtof(_str, NULL));
        return _f;
    }
    catch (std::invalid_argument & e)
    {
        throw Convert::ConversionNotPossible();
    }
    return 0;
}

double		Convert::convertToDouble(void) {
        
    try {
        if (strlen(_str) == 1)
            _d = _str[0];
        else
            _d = static_cast<double>(std::strtold(_str, NULL));
        return _d;
    }
    catch (std::invalid_argument & e)
    {
        throw Convert::ConversionNotPossible();
    }
    return 0;
}

std::ostream& operator<<(std::ostream & os, Convert & obj)
{
    //***************** char ****************
	os << "char: ";
	try{
		std::cout << obj.convertToChar() << std::endl;
    }
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
    }
    
    //***************** int ****************
	os << "int : ";
	try{
		std::cout << obj.convertToInt() << std::endl;
    }
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
    }
    
    //***************** float ****************
	os << "float : ";
	try{
		std::cout << obj.convertToFloat() << "f" << std::endl;
    }
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
    }
        
    //***************** double ****************
	os << "double : ";
	try{
		std::cout << obj.convertToDouble() << std::endl;
    }
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
    }

    return os;
}