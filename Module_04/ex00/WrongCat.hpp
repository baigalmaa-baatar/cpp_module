/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:15:39 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/14 12:15:40 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public:
        WrongCat(void);
        WrongCat(WrongCat const & obj);
        virtual ~WrongCat();
        
        WrongCat & operator=(const WrongCat & obj);
        void    makeSound(void) const;
};

#endif
