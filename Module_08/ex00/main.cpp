/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:19:10 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/07 10:19:11 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector
#include <list>         // std::list
#include "easyfind.hpp"

int main(void)
{
    std::cout << "\n***** Found example (container Vector) ******\n" << std::endl;
 
    const int myints[] = { 10, 20, 30, 40 };
    std::vector<int> myvector (myints,myints+4);
    std::vector<int>::iterator it = easyfind(myvector, 30);
    if (it != myvector.end())
        std::cout << "Element found in container: " << *it << '\n';
    else
        std::cout << "Element not found in container\n";
    
    std::cout << "\n***** Not found example (container Vector) ******\n" << std::endl;
    std::vector<int>::iterator it_not_found = easyfind(myvector, 100);
    if (it_not_found != myvector.end())
        std::cout << "Element found in container: " << *it_not_found << '\n';
    else
        std::cout << "Element not found in container.\n";

    std::cout << "\n***** Found example  (container List)******\n" << std::endl;
    
    std::list<int> mylist (myints, myints + 4);
    std::list<int>::iterator it_list = easyfind(mylist, 20);
    if (it_list != mylist.end())
        std::cout << "Element found in container: " << *it_list << '\n';
    else
        std::cout << "Element not found in container.\n";
    
    return 0;
}