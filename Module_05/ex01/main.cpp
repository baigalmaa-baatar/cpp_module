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

int main(void) {

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "********************Test beSigned or not***************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    Bureaucrat bur_f("French bureaucracy", 100);
    std::cout << bur_f << std::endl;
    Form form_f("form1", 120);
    std::cout << form_f << std::endl;
    form_f.beSigned(bur_f);
    std::cout << form_f << std::endl;

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "*******************Test signForm***********************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    Bureaucrat bur_j("Japanese bureaucracy", 100);
    std::cout << bur_j << std::endl;
    Form form_j("form2", 120);
    std::cout << form_j << std::endl;
    bur_j.signForm(form_j);
    std::cout << form_j << std::endl;

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "*******************AGAIN Test signForm*****************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    Bureaucrat bur_c("Canadian bureaucracy", 100);
    std::cout << bur_c << std::endl;
    Form form_c("form3", 40, 120);      //grade to required SIGNED and Grade required to EXECUTED  
    std::cout << form_c << std::endl;
    bur_c.signForm(form_c);
    std::cout << form_c << std::endl;

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "*****************Test already signed form**************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    bur_j.signForm(form_j);
    std::cout << form_j << std::endl;

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "****Testing too high and too low grade exceptions******" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    try {
        Form form_1(-5, 100);
    } catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Form for_2(100, 170);
    } catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Bureaucrat bur1("Hello kitty office", 10);
        Form form1("Form for cats", 5);
        form1.beSigned(bur1);
    } catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "****************Destructing all constructors***********" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    return 0;
}

