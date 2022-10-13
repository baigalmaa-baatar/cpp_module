/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:01:34 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/07 12:01:35 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

namespace ft
{
    template <typename T> void swap(T &a, T &b)
    {
        T tmp;

        tmp = a;
        a = b;
        b = tmp;
    }
    template <typename T> const T &max(T const &a, T const &b) { return a >= b ? a : b; }
    template <typename T> const T &min(T const &a, T const &b) { return a <= b ? a : b; }
}

#endif