/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:23:10 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/10 11:23:13 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const Animal* animals[4];

    std::cout << "--------------------Creating cat dog brains--------------------" << std::endl;

    for (int i = 0; i < 2; i++)
    {
        animals[i] = new Dog();
    }
    for (int i = 2; i < 4; i++)
    {
        animals[i] = new Cat();
    }

    std::cout << "--------------------Deleting cat dog brains--------------------" << std::endl;

    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }

    std::cout << "--------------------Testing deep copy--------------------" << std::endl;

    Cat cat1;
    Cat cat2;

    cat1.setBrain(1, "eat fast");
    std::cout << "cat1's brain: " << cat1.getBrain(1) << std::endl;

    cat2 = cat1;
    cat2.setBrain(1, "sleep!!!");
    std::cout << "cat2's brain: " << cat2.getBrain(1) << std::endl;
    
    std::cout << "cat1s' brain address : " << &(cat1.getBrain(1)) << std::endl;
    std::cout << "cat2s' brain address : " << &(cat2.getBrain(1)) << std::endl;

    std::cout << "--------------------It shouldn't have changed:--------------------" << std::endl;

    std::cout << "cat1's brain: " << cat1.getBrain(1) << std::endl;                     //yes

    Dog dog1;
    Dog dog2(dog1);

    dog1.setBrain(1, "run!!!!!");
    std::cout << "dog1 : " << dog1.getBrain(1) << std::endl;

    return 0;
}