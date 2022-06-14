/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:27:13 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/14 11:27:14 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(Dog const & obj);
        virtual ~Dog();
        
        Dog & operator=(const Dog & obj);

        void    makeSound(void) const;
};

#endif
