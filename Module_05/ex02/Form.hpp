/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 22:16:47 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/16 22:16:48 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string _name;
        bool    _isSigned;
        const int _gradeRequiredToSign;
        const int _gradeRequiredToExecute;
        const std::string _target;
        virtual void activity() const = 0;

    public:
        //*******************************************************
        //*****************Exception classes*********************
        //*******************************************************

        class GradeTooHighException : public std::exception {
            private:
                const char* _message;
            public:
                explicit    GradeTooHighException(const char* message);
                virtual const char* what() const throw (); //inheritaing what member function, then this what is not gonna throw exception, because throw()
        };
        class GradeTooLowException : public std::exception {
            private:
                const char* _message;
            public:
                GradeTooLowException(const char* message);
                virtual const char* what() const throw ();
        };

        //*******************************************************
        //************Orthodox canonical class form**************
        //*******************************************************

        Form ();
        explicit   Form (std::string const & name);
        explicit   Form   (int grade);
        Form (std::string const & name, int grade);
        Form (int gradeRequiredToSign, int gradeRequiredToExecute);
        Form (std::string const & name, int gradeRequiredToSign, int gradeRequiredToExecute);
        Form (const Form & obj);
        virtual ~Form ();
        
        Form & operator=(const Form & obj);
        
        //*******************************************************
        //**********************Getters**************************
        //*******************************************************

        const std::string & getName(void) const;
        bool    getIsSigned(void) const;
        int     getGradeRequiredToSign(void) const;
        int     getGradeRequiredToExecute(void) const;

        const std::string & getTarget(void) const;


        //*******************************************************
        //******************Other member functions***************
        //*******************************************************

        void    beSigned(const Bureaucrat & obj);
        void execute(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream& os, const Form &a);

#endif
