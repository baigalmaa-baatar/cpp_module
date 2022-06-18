/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:55:25 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/17 21:55:26 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::activity() const
{
    const std::string& file_name = getTarget() + "_shrubbery.log";
    std::string str1 = ".\n"        //Create a file <target>_shrubbery in the working directory, and writes ASCII trees inside it.

    "|-- Bureaucrat.cpp\n"
    "|-- Bureaucrat.hpp\n"
    "|-- Form.cpp      \n"
    "|-- Form.hpp      \n"
    "|-- Makefile      \n"
    "|-- PresidentialPardonForm.cpp\n"
    "|-- PresidentialPardonForm.hpp\n"
    "|-- RobotomyRequestForm.cpp\n"
    "|-- RobotomyRequestForm.hpp\n"
    "|-- ShrubberyCreationForm.cpp\n"
    "|-- ShrubberyCreationForm.hpp\n"
    "`-- main.cpp\n";

    
    std::ofstream ofs(file_name.c_str());  
    if (!ofs)
    {
        throw std::runtime_error("The file could not be opened.");
    }
    ofs << str1;        //write out to the target file
    if (ofs.fail())
    {
        throw std::runtime_error("Could not write to the file");
    }
}
    //*******************************************************
    //************Orthodox canonical class ******************
    //*******************************************************

    ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) {}
    ShrubberyCreationForm::ShrubberyCreationForm (const std::string& target) : Form("ShrubberyCreationForm", 145, 137, target) {}
    ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm& obj) : Form (obj) {}
    ShrubberyCreationForm::~ShrubberyCreationForm () {}
    ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ) {
        return (*this);
    }