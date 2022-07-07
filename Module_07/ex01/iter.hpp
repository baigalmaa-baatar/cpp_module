/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:10:44 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/07 12:10:46 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H
# include <iostream>

template <typename T>
void    iter (T *array, std::size_t len, void (*f)(T&))
{
    for (std::size_t i = 0; i < len; i++)
    {
        f(array[i]);
    }
}

//Parameterized template 

template <typename T>
void    iter (const T *array, std::size_t len, void (*f)(const T&))
{
    for (std::size_t i = 0; i < len; i++)
    {
        f(array[i]);
    }
}

//For test purpose

template <typename T>
void    func_output1 (T& params)
{
    std::cout << params << std::endl;

}

template <typename T>
void    func_output2 (const T& params)
{
    std::cout << params << std::endl;

}

#endif
