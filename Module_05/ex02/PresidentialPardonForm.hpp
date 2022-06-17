/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:54:54 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/17 21:54:55 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
        virtual void    activity(void) const;

    public:
        //*******************************************************
        //************Orthodox canonical class ******************
        //*******************************************************
        PresidentialPardonForm ();
        explicit   PresidentialPardonForm (const std::string& target);
        PresidentialPardonForm (const PresidentialPardonForm & obj);
        virtual ~PresidentialPardonForm ();
        
        PresidentialPardonForm & operator=(const PresidentialPardonForm & obj);
};

#endif