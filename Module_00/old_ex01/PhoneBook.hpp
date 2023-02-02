/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:01:41 by bbaatar           #+#    #+#             */
/*   Updated: 2022/05/31 16:01:42 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook{
    public:
        PhoneBook();
        ~PhoneBook();
        void    search(void);
        bool    isFull(void);
        void    addContact(void);

    private:
        int     num_contacts;
        Contact contacts[8];
};

#endif
