/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:15:27 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/14 12:15:28 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAl_H
# define WRONGANIMAl_H

# include <iostream>
# include <string>

class WrongAnimal {
    protected:
        std::string  _type;
        
    public:
        WrongAnimal();
        WrongAnimal(const std::string& type);
        WrongAnimal(WrongAnimal const & obj);
        virtual ~WrongAnimal();
        
        WrongAnimal & operator=(const WrongAnimal & obj);

        std::string getType(void) const;
        void    setType(std::string type);
        void    makeSound(void) const;      //this is not virtual that means WrongAnimal makesound will override for WrongCat makesound function
};

#endif
