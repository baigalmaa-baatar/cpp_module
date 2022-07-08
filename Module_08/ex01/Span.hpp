/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:18:18 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/08 17:18:21 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SPAN_H
# define SPAN_H
# include <set>
# include <stdexcept>
# include <climits>

class Span {
    private:
        unsigned int _maxNbrs;
        std::multiset<int> _multiset;

    public:
        //*******************************************************
        //****** Canonical constructors and a destructor ********
        //*******************************************************
        Span ();
        explicit Span (unsigned int maxNbrs);
        Span (const Span& obj);
        Span& operator= (const Span& obj);
        ~Span ();

        //*******************************************************
        //***************** Getters and setters *****************
        //*******************************************************
        unsigned int    getMaxNbrs(void) const;
        const std::multiset<int>&  getMultiset(void) const;
        
        //*******************************************************
        //****************** Member functions *******************
        //*******************************************************
        
        unsigned int  shortestSpan(void) const;
        unsigned int longestSpan(void) const;
        //Insert only 1 number
        void    addNumber(int nbr);

        //Insert range of iterators: (1, 100) etc

        //current _multiset size : 10
        //additional numbers to be inserted : 100
        //maxsize = 50
        //50 - 10 = 40
        //40 < 100 means capacity will be over.
        
        template <typename T>
        void    addNumber(T begin, T end) {

            unsigned int remainingSize = getMaxNbrs() - _multiset.size();
            unsigned int additionalSize = std::distance(begin, end);
            if (remainingSize < additionalSize)
                throw std::logic_error ("Can't insert anymore. Capacity has reached.");
            _multiset.insert(begin, end);
        }
};

#endif
