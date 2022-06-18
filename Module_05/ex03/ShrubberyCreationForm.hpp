/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:55:19 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/17 21:55:21 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    private:
        virtual void    activity(void) const;

    public:
        //*******************************************************
        //************Orthodox canonical class ******************
        //*******************************************************
        ShrubberyCreationForm ();
        explicit   ShrubberyCreationForm (const std::string& target);
        ShrubberyCreationForm (const ShrubberyCreationForm& obj);
        virtual ~ShrubberyCreationForm ();
        
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm&);
};

#endif
