/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:17:50 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/08 16:17:51 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

template <typename T>
typename T::iterator    easyfind (T &container, const int nbr)
{
    typename T::iterator it = std::find (container.begin(), container.end(), nbr);
    return it;
}

// Why we need const_iterator?
// const_iterator doesn't change container's elements. So whenever we have a chance we should use const_iterator
template <typename T>
typename T::const_iterator  easyfind (const T &container, const int nbr)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), nbr);
    return it;
}

#endif
