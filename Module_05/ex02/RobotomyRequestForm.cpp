/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:55:12 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/17 21:55:13 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::activity() const
{
    if (rand()%2)
    {
        std::cout << "drrrrr drrrr ..." << getTarget() << " has been robotomized successfully!" << std::endl;
    }
    else
    {
        std::cout << "drrrrr drrrr ..." << getTarget() << " hasn't been robotomized!" << std::endl;
    }
}
    //*******************************************************
    //************Orthodox canonical class ******************
    //*******************************************************

    RobotomyRequestForm::RobotomyRequestForm() : Form("unknown target", 72, 45) {}
    RobotomyRequestForm::RobotomyRequestForm (const std::string& target) : Form(target, 72, 45) {}
    RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm& obj) : Form (obj) {}
    RobotomyRequestForm::~RobotomyRequestForm () {}
    RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
        return (*this);
    }