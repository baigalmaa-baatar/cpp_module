/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:33:05 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/06 18:33:06 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int main(void)
{
    std::string     str_var = "HI THIS IS BRAIN";
    std::string*    stringPTR = &str_var;
    std::string&    stringREF = str_var;

    std::cout << "The memory address of the string variable: " << &str_var << std::endl;
    std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;

    std::cout << "The value of the string variable:          " << str_var << std::endl;
    std::cout << "The value pointed to by stringPTR:         " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:         " << stringREF << std::endl;

    return 0;
}
