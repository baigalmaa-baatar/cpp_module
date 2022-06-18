/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:40:48 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/17 20:46:13 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "****************Test ShrubberyCreationForm*************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    {
        ShrubberyCreationForm shrub1("form_shrub");
        Bureaucrat bur1("bur_shrub", 1);
        
        bur1.signForm(shrub1);
        bur1.executeForm(shrub1);
        std::cout << bur1 << std::endl;
        std::cout << shrub1 << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "****************Test RobotomyRequestForm-1*************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    {
        RobotomyRequestForm robot1("form_robot");
        Bureaucrat bur2("bur_robot", 1);
        
        bur2.signForm(robot1);
        bur2.executeForm(robot1);
        std::cout << bur2 << std::endl;
        std::cout << robot1 << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "****************Test RobotomyRequestForm-2*************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;
    {
        RobotomyRequestForm robot1("form_robot");
        Bureaucrat bur2("bur_robot", 50);
        
        bur2.signForm(robot1);
        bur2.executeForm(robot1);
        std::cout << bur2 << std::endl;
        std::cout << robot1 << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "**************Test PresidentialPardonForm-1************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    {
        PresidentialPardonForm pres1("form_pres");
        Bureaucrat bru1("pres_bur", 1);

        bru1.signForm(pres1);
        bru1.executeForm(pres1);
        std::cout << bru1 << std::endl;
        std::cout << pres1 << std::endl;
    }
    
    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "**************Test PresidentialPardonForm-2************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    {
        PresidentialPardonForm pres1("form_pres");
        Bureaucrat bru1("pres_bur", 100);

        bru1.signForm(pres1);
        bru1.executeForm(pres1);
        std::cout << bru1 << std::endl;
        std::cout << pres1 << std::endl;
    }
    
    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "**************Test PresidentialPardonForm-3************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    {
        PresidentialPardonForm pres1("form_pres");
        Bureaucrat bru1("pres_bur", 10);

        bru1.signForm(pres1);
        bru1.executeForm(pres1);
        std::cout << bru1 << std::endl;
        std::cout << pres1 << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "****************Destructing all constructors***********" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    return 0;
}

