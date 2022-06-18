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
#include "Intern.hpp"

int main(void) {

    Bureaucrat bur1("bur1", 1);

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "****************Test ShrubberyCreationForm*************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    {
        Intern someRandomIntern;
        Form* rrf;

        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        if (rrf)
        {
            bur1.signForm(*rrf);
            bur1.executeForm(*rrf);
            delete rrf;
        }
    }

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "****************Test RobotomyRequestForm***************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    {
        Intern someRandomIntern;
        Form* rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if (rrf)
        {
            bur1.signForm(*rrf);
            bur1.executeForm(*rrf);
            delete rrf;
        }
    }

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "**************Test PresidentialPardonForm**************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    {
        Intern someRandomIntern;
        Form* rrf;

        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        if (rrf)
        {
            bur1.signForm(*rrf);
            bur1.executeForm(*rrf);
            delete rrf;
        }
    }

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "**************Test non-existing request****************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    {
        Intern someRandomIntern;
        Form* rrf;

        rrf = someRandomIntern.makeForm("COUCOU", "Bender");
        if (rrf)
        {
            bur1.signForm(*rrf);
            bur1.executeForm(*rrf);
            delete rrf;
        }
    }
    
    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "****************Destructing all constructors***********" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    return 0;
}

