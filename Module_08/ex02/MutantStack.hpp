/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:38:38 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/09 11:38:40 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        //*******************************************************
        //****** Canonical constructors and a destructor ********
        //*******************************************************
        MutantStack () {}
        MutantStack (const MutantStack& obj) : std::stack<T>(obj){}
        MutantStack& operator= (const MutantStack& obj) {
            this->c = obj.c;
            return *this;
        }
        ~MutantStack () {}

        //*******************************************************
        //********************** Iterator ***********************
        //*******************************************************
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin () {return this->c.begin(); }
        iterator end () {return this->c.end(); }

        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const{return this->c.begin(); }
        const_iterator end() const{return this->c.end(); }
};

#endif
