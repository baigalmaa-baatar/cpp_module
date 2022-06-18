/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:55:07 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/17 21:55:08 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
    private:
        virtual void    activity(void) const;

    public:
        //*******************************************************
        //************Orthodox canonical class ******************
        //*******************************************************
        RobotomyRequestForm ();
        explicit   RobotomyRequestForm (const std::string& target);
        RobotomyRequestForm (const RobotomyRequestForm & obj);
        virtual ~RobotomyRequestForm ();
        
        RobotomyRequestForm & operator=(const RobotomyRequestForm&);
};

#endif
