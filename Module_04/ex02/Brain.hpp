/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:18:05 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/14 14:18:06 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain {

    protected:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(Brain & obj);
        ~Brain();

        Brain & operator=(Brain & obj);

        const std::string& getIdeas(int index) const;
        void setIdeas(int index, const std::string& str);
};

#endif
