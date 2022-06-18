/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 22:16:42 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/16 22:16:44 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

        //*******************************************************
        //*****************Exception classes*********************
        //*******************************************************

Form::GradeTooHighException::GradeTooHighException (const char* message) : _message (message) {    //why use pointer? if I use const char* means it is not changeable

}

const char* Form::GradeTooHighException::what() const throw () {
    return _message;
}

Form::GradeTooLowException::GradeTooLowException (const char* message) : _message (message) {    //why use pointer? if I use const char* means it is not changeable

}

const char* Form::GradeTooLowException::what() const throw () {
    return _message;
}

        //*******************************************************
        //************Orthodox canonical class form**************
        //*******************************************************

Form::Form () : _name("unknown name"), _isSigned (false), _gradeRequiredToSign(150), _gradeRequiredToExecute (150) {
    // std::cout << "Default constructor Form has called." << std::endl;
    return ;
}

Form::Form (std::string const & name) : _name(name), _isSigned(false), _gradeRequiredToSign(150), _gradeRequiredToExecute (150) {
    // std::cout << "Parameterized constructor Form with name has called." << std::endl;

    return ;
}

Form::Form (int grade) : _name("unknown name"), _isSigned(false), _gradeRequiredToSign(grade), _gradeRequiredToExecute (grade) {
    // std::cout << "Parameterized constructor Form with grade has called." << std::endl;

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

Form::Form (std::string const & name, int grade) 
    : _name(name), _isSigned(false), _gradeRequiredToSign(grade), _gradeRequiredToExecute (grade) {
    // std::cout << "Parameterized constructor Form with name and grade has called." << std::endl;

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

Form::Form (int gradeRequiredToSign, int gradeRequiredToExecute)
    : _name("unknown name"), _isSigned(false), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute (gradeRequiredToExecute) {
    // std::cout << "Parameterized constructor Form with name and grade has called." << std::endl;

    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
    {
        throw GradeTooHighException("Exception has occured, the grade is too high!");
    }
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
    {
        throw GradeTooLowException("Exception has occured, the grade is too low!");
    }
    return ;
}

Form::Form (std::string const & name, int gradeRequiredToSign, int gradeRequiredToExecute)
    : _name(name), _isSigned(false), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute (gradeRequiredToExecute) {
    // std::cout << "Parameterized constructor Form with name and grade has called." << std::endl;

    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
    {
        throw GradeTooHighException("Exception has occured, the grade is too high!");
    }
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
    {
        throw GradeTooLowException("Exception has occured, the grade is too low!");
    }
    return ;
}

Form::Form (const Form & obj) 
    : _name (obj.getName()), _isSigned(false), _gradeRequiredToSign(obj.getGradeRequiredToSign()), _gradeRequiredToExecute(obj.getGradeRequiredToExecute()) {
    // std::cout << "Copy Form constructor has called." << std::endl;

    return ;
}

Form::~Form () {
    // std::cout << "Default destructor called." << std::endl;
    return ;
}

Form & Form::operator=(const Form & obj) {
    // std::cout << "Copy Form constructor has called." << std::endl;

    _isSigned = obj.getIsSigned();
    return *this;
}

//*****************************************
//*******Getters and Setters***************
//*****************************************

const std::string & Form::getName(void) const {
    return _name;
}

bool    Form::getIsSigned(void) const {
    return _isSigned;
}

int     Form::getGradeRequiredToSign(void) const {
    return _gradeRequiredToSign;
}

int     Form::getGradeRequiredToExecute(void) const {
    return _gradeRequiredToExecute;
}

//*****************************************
//**********Member functions***************
//*****************************************

void    Form::beSigned(const Bureaucrat & obj) {

    if (_isSigned)
    {
        return ;
    }
    if (obj.getGrade() > _gradeRequiredToSign)
    {
        throw GradeTooLowException("Exception in beSigned has occured, the grade is too low!");
    }
    _isSigned = true;
    return ;
}

std::ostream& operator<<(std::ostream & os, const Form & obj)
{
    os << obj.getName() << \
    "\nis signed or not: " << obj.getIsSigned() << \
    "\ngrade required to sign: " << obj.getGradeRequiredToSign() << \
    "\ngrade required to execute: " << obj.getGradeRequiredToExecute() << std::endl;
    return os;
}
