/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:54:58 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/17 21:54:59 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::activity() const
{
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
    //*******************************************************
    //************Orthodox canonical class ******************
    //*******************************************************

    PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {}
    PresidentialPardonForm::PresidentialPardonForm (const std::string& target) : Form("PresidentialPardonForm", 25, 5, target) {}
    PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm& obj) : Form (obj) {}
    PresidentialPardonForm::~PresidentialPardonForm () {}
    PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm&) {
        return (*this);
    }