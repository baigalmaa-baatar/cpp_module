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
# include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain* _dog_brain;
    public:
        Dog();
        Dog(Dog const & obj);
        virtual ~Dog();
        
        Dog & operator=(const Dog & obj);

        void    makeSound(void) const;
        const std::string& getBrain(int index) const;
        void    setBrain(int index, const std::string& str);
};

#endif
