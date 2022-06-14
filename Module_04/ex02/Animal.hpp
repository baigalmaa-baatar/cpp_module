/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:     */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:23:20 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/10 11:23:22 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Animal {
    protected:
        std::string  _type;
        
    public:
        Animal();
        Animal(const std::string& type);
        Animal(Animal const & obj);
        virtual ~Animal();
        
        Animal & operator=(const Animal & obj);

        std::string getType(void) const;
        void    setType(std::string type);
        virtual void    makeSound(void) const = 0;      //To avoid any possible mistakes, the default Animal class should not be instantiable. There will be no sound.
};

#endif