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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    {
        const Animal *animals[10];
        for (size_t i = 0; i < 10; i++)
        {
            if (i % 2)
            {
                animals[i] = new Dog();
            }
            else
            {
                animals[i] = new Cat();
            }
        }
        for (size_t i = 0; i < 10; i++)
        {
            delete animals[i];
        }
    }
    {
        const Dog *dog = new Dog();
        const Cat *cat = new Cat();

        dog->getBrain().setIdeas(1, "sit");
        std::cout << dog->getBrain().getIdeas(1)<< " " << std::endl;
        
        cat->getBrain().setIdeas(1, "eat");
        std::cout << cat->getBrain().getIdeas(1)<< " " << std::endl;

        delete dog, delete cat;
    }

    return 0;
}