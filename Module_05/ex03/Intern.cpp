/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:43:25 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/18 14:43:26 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

    //*******************************************************
    //************Orthodox canonical class ******************
    //*******************************************************

    Intern::Intern() {}
    Intern::Intern (const Intern&) {}
    Intern::~Intern () {}

    Intern & Intern::operator=(const Intern&) {
        return (*this);
    }

    //*******************************************************
    //*********************Form types************************
    //*******************************************************

    Form* Intern::makeShrubberyCreationForm (const std::string& target) const {
        Form* f = new ShrubberyCreationForm(target);
        return f;
    }
    
    Form* Intern::makeRobotomyRequestForm (const std::string& target) const {
        Form* f = new RobotomyRequestForm(target);
        return f;
    }

    Form* Intern::makePresidentialPardonForm (const std::string& target) const {
        Form* f = new PresidentialPardonForm(target);
        return f;
    }
    
    Form* Intern::makeForm (const std::string & form, const std::string& target) const {
        std::string form_list[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

        Form*   (Intern::*func_ptr[3])(const std::string&) const = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
        Form*   ret = NULL;
         
        for (int i = 0; i < 3; i++)
        {
            if (form == form_list[i])
            {
                ret = (this->*func_ptr[i])(target);
                return ret;
            }
        }
        std::cerr << "You must enter the existing form name: shrubbery creation\nrobotomy request\nor presidential pardon\n" << form << std::endl;
        return NULL;
    }