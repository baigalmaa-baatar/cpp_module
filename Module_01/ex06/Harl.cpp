/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:41:41 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/07 15:41:42 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void    Harl::debug()
{
    std::cout << "\001\033[36m\002[DEBUG]:   \001\033[0m\002" << "\001\033[36m\002I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\001\033[0m\002" << std::endl;
}

void    Harl::info()
{
    std::cout << "\001\033[32m\002[INFO]:    \001\033[0m\002" << "\001\033[32m\002I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\001\033[0m\002" << std::endl;
}

void    Harl::warning()
{
    std::cout << "\001\033[33m\002[WARNING]: \001\033[0m\002" << "\001\033[33m\002I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month\001\033[0m\002" << std::endl;
}

void    Harl::error()
{
    std::cout << "\001\033[31m\002[ERROR]:   \001\033[0m\002" << "\001\033[31m\002This is unacceptable! I want to speak to the manager now\001\033[0m\002" << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string level_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*func_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    void    (Harl::*func)(void) = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (level == level_list[i])
        {
            func = func_ptr[i];
            break;
        }
    }
    if (func)
        (this->*func)();
}
