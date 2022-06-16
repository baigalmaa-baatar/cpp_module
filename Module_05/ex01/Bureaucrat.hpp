/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:41:03 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/15 20:41:04 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;
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
        Bureaucrat ();
        explicit    Bureaucrat (std::string const & name);  //explicit meaning only in this input the constructor will created
        explicit   Bureaucrat   (int grade);
        Bureaucrat (std::string const & name, int grade);
        Bureaucrat (const Bureaucrat & obj);
        ~Bureaucrat ();
        
        Bureaucrat & operator=(const Bureaucrat & obj);
        
        //*******************************************************
        //******************Getters and Setters******************
        //*******************************************************

        const std::string & getName(void) const;
        int         getGrade(void) const;

        //*******************************************************
        //******************Other member functions***************
        //*******************************************************

        void    increaseGrade(void);
        void    decreaseGrade(void);
        void    signForm(void);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &a);

#endif
