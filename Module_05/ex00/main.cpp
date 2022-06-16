/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:40:48 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/15 20:40:49 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "********************Call all constructors**************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    std::string name1 = "French bureaucracy";
    std::string name2 = "Japanese bureaucracy";
    int grade1 = 150;
    int grade2 = 1;

    Bureaucrat bur_french(name1, grade1);
    Bureaucrat bur_japanese(name2, grade2);

    std::cout << bur_french << std::endl;
    std::cout << bur_japanese << std::endl;

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "*****************Increase and decrease*****************" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    bur_french.increaseGrade();
    std::cout << bur_french << std::endl;
    bur_japanese.decreaseGrade();
    std::cout << bur_japanese << std::endl;

    std::cout << " " << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << "******Testing too high and too low grade exceptions*******" << std::endl;
    std::cout << "*******************************************************" << std::endl;
    std::cout << " " << std::endl;

    try {
        Bureaucrat bur_1(-5);
    } catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Bureaucrat bur_2(160);
    } catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Bureaucrat bur1(150);
        bur1.decreaseGrade();
    } catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Bureaucrat bur2(1);
        bur2.increaseGrade();
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

