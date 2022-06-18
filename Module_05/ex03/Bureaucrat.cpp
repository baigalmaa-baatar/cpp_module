/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:40:55 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/15 20:40:58 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

        //*******************************************************
        //*****************Exception classes*********************
        //*******************************************************

Bureaucrat::GradeTooHighException::GradeTooHighException (const char* message) : _message (message) {

}

const char* Bureaucrat::GradeTooHighException::what() const throw () {
    return _message;
}

Bureaucrat::GradeTooLowException::GradeTooLowException (const char* message) : _message (message) {

}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
    return _message;
}

        //*******************************************************
        //************Orthodox canonical class form**************
        //*******************************************************

Bureaucrat::Bureaucrat () : _name("unknown name"), _grade (150) {
    // std::cout << "Default constructor Bureaucrat has called." << std::endl;
    return ;
}

Bureaucrat::Bureaucrat (std::string const & name) : _name(name), _grade(150) {
    // std::cout << "Parameterized constructor Bureaucrat with name has called." << std::endl;

    return ;
}

Bureaucrat::Bureaucrat (int grade) : _name("unknown name"), _grade(grade) {
    // std::cout << "Parameterized constructor Bureaucrat with grade has called." << std::endl;

    if (grade < 1)
    {
        throw GradeTooHighException("Exception has occured, the grade is too high!");
    }
    if (grade > 150)
    {
        throw GradeTooLowException("Exception has occured, the grade is too low!");
    }
    return ;
}

Bureaucrat::Bureaucrat (std::string const & name, int grade) : _name(name), _grade(grade) {
    // std::cout << "Parameterized constructor Bureaucrat with name and grade has called." << std::endl;

    if (grade < 1)
    {
        throw GradeTooHighException("Exception has occured, the grade is too high!");
    }
    if (grade > 150)
    {
        throw GradeTooLowException("Exception has occured, the grade is too low!");
    }
    return ;
}

Bureaucrat::Bureaucrat (const Bureaucrat & obj) : _name (obj.getName()), _grade(obj.getGrade()) {
    // std::cout << "Copy Bureaucrat constructor has called." << std::endl;

    return ;
}

Bureaucrat::~Bureaucrat () {
    // std::cout << "Default destructor called." << std::endl;
    return ;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & obj) {
    // std::cout << "Copy Bureaucrat constructor has called." << std::endl;

    _grade = obj.getGrade();
    return *this;
}

//*****************************************
//*******Getters and Setters***************
//*****************************************

const std::string & Bureaucrat::getName(void) const {
    return _name;
}

int Bureaucrat::getGrade(void) const {
    return _grade;
}

//*****************************************
//**********Member functions***************
//*****************************************

void    Bureaucrat::increaseGrade(void) {
    if (_grade == 1)
    {
        throw GradeTooHighException ("Grade is already 1. Not possible to increase anymore!");
    }
    _grade -= 1;
}

void    Bureaucrat::decreaseGrade(void) {
    if (_grade == 150)
    {
        throw GradeTooLowException ("Grade is already 150. Not possible to decrease anymore!");
    }
    _grade += 1;
}

/*
<bureaucrat> signed <form>
Otherwise, it will print something like:
<bureaucrat> couldn’t sign <form> because <reason>.
*/
void    Bureaucrat::signForm(Form & obj) const {
    
    std::string reason;

    if (obj.getIsSigned())
    {
        reason = "It has already signed";
    }
    else if (obj.getGradeRequiredToSign() < _grade)
    {
        reason = "The grade is too low";
    }
    else
    {
        std::cout << _name << " signed " << \
            obj.getName() << std::endl;
        obj.beSigned(*this);
        return ;
    }
    std::cout << _name << " couldn’t sign " << obj.getName() << " because " << reason << std::endl;
    return ;
}

void    Bureaucrat::executeForm(const Form& form) const {
    
    try
    {
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << _name << " can't execute " << \
                     form.getName() << " reason: " << \
                     e.what() << std::endl;
        return;
    }
    std::cout << _name << " executes " << form.getName() << std::endl;
}

std::ostream& operator<<(std::ostream & os, const Bureaucrat & obj)
{
    os << obj.getName() << "'s grade is: " << obj.getGrade();
    return os;
}