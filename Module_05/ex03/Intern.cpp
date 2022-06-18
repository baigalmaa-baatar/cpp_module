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
    Intern::Intern (const Intern& obj) {}
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
    
    Form* makeForm (const std::string & form, const std::string& target) const {

     // ene hurtel hiisen   
    }