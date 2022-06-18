/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:43:30 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/18 14:43:31 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    public:
        //*******************************************************
        //************Orthodox canonical class ******************
        //*******************************************************
        Intern ();
        Intern (const Intern & obj);
        virtual ~Intern ();
        
        Intern & operator=(const Intern&);

        //*******************************************************
        //*********************Form types************************
        //*******************************************************
        Form* makeShrubberyCreationForm (const std::string& target) const;
        Form* makeRobotomyRequestForm (const std::string& target) const;
        Form* makePresidentialPardonForm (const std::string& target) const;
        Form* makeForm (const std::string & form, const std::string& target) const;
};

#endif