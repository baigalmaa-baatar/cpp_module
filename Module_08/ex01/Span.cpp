/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:17:50 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/08 17:17:52 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//*******************************************************
//****** Canonical constructors and a destructor ********
//*******************************************************
Span::Span () : _maxNbrs(0) {
    return ;
}

//San sp(5);
// sp.addNumber(10);

Span::Span (unsigned int maxNbrs) : _maxNbrs(maxNbrs) {
    return ;
};

Span::Span (const Span& obj) : _maxNbrs(obj.getMaxNbrs()), _multiset(obj.getMultiset()) {
    return ;
};

Span& Span::operator=(const Span & obj) {
    _maxNbrs = obj.getMaxNbrs();
    _multiset = obj.getMultiset();

    return *this;
}

Span::~Span () {
    return ;
};

//*******************************************************
//***************** Getters and setters *****************
//*******************************************************
unsigned int Span::getMaxNbrs(void) const{
    return _maxNbrs;
}

const std::multiset<int>& Span::getMultiset(void) const {
    return _multiset;
}

//*******************************************************
//****************** Member functions *******************
//*******************************************************
void    Span::addNumber(int nbr) {
    
    if(getMaxNbrs() == _multiset.size())
        throw std::logic_error ("Can't add. Capacity has reached.");
    _multiset.insert(nbr);
}

// {3 6 10 11}
//shortest = 11-10  -> 1

unsigned int Span::shortestSpan(void) const{
    if (_multiset.size() <= 1)
    {
        throw std::logic_error("Can't calculate shortest span because there isn't many numbers stored.");
    }
    std::multiset<int>::iterator prev_it = _multiset.begin();
    unsigned int min_val = UINT_MAX;
    for (std::multiset<int>::iterator it = _multiset.begin(); it != _multiset.end(); it++) {
        if (it == _multiset.begin())
            continue;
        if (min_val > static_cast<unsigned int>(*it - *prev_it))
            min_val = static_cast<unsigned int>(*it - *prev_it);
        prev_it = it;
    }
    return min_val;
}

unsigned int Span::longestSpan(void) const{
    if (_multiset.size() <= 1)
    {
        throw std::logic_error("Can't calculate shortest span because there isn't many numbers stored.");
    }
    //rbegin is actually the last element of your container. end is one past the end of the container
    return (*_multiset.rbegin() - *_multiset.begin());
}
