/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:27:21 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/14 11:27:23 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain* _cat_brain;

    public:
        Cat(void);
        Cat(Cat const & obj);
        virtual ~Cat();
        
        Cat & operator=(const Cat & obj);
        void    makeSound(void) const;
        const std::string& getBrain(int index) const;
        void    setBrain(int index, const std::string& str) ;
};

#endif
