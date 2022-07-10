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
#include <stack>
#include <vector>
#include <list>
#include "MutantStack.hpp"

int main()
{
    std::cout << "\n ********** Testing int stack ********** \n" << std::endl;

    {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);
        std::cout << "popping last element : 17" << std::endl;
        mstack.pop();
        std::cout << "stack size is :" << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }

    std::cout << "\n ********** Testing int list ********** \n" << std::endl;

    {
        std::list<int> mlist;

        mlist.push_back(5);
        mlist.push_back(17);
        std::cout << "popping last element : 17" << std::endl;
        mlist.pop_back();
        std::cout << "stack size is :" << mlist.size() << std::endl;
        mlist.push_back(3);
        mlist.push_back(5);
        mlist.push_back(737);
        //[...]
        mlist.push_back(0);
        std::list<int>::iterator it = mlist.begin();
        std::list<int>::iterator ite = mlist.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }

    std::cout << "\n ********** Testing float stack ********** \n" << std::endl;
    {
        MutantStack<float> mstack;

        mstack.push(5.1);
        mstack.push(17.1);
        std::cout << "stack top is :" << mstack.top() << std::endl;
        std::cout << "popping last element : 17.1" << std::endl;
        mstack.pop();
        std::cout << "stack size is :" << mstack.size() << std::endl;
        mstack.push(3.1);
        mstack.push(5.1);
        mstack.push(737.1);
        //[...]
        mstack.push(0.1);
        MutantStack<float>::iterator it = mstack.begin();
        MutantStack<float>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    


    return 0;
}
