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
    const Animal* default_animal = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    default_animal->makeSound();

    delete default_animal;
    delete j;
    delete i;

    std::cout << " " << std::endl;
    std::cout << "*************** Wrong Animal and Wrong Cat part *************** " << std::endl;
    std::cout << " " << std::endl;

    const WrongAnimal* wrong_default_animal = new WrongAnimal();
    const WrongAnimal* wrong_j = new WrongCat();

    std::cout << wrong_default_animal->getType() << " " << std::endl;
    std::cout << wrong_j->getType() << " " << std::endl;
    
    wrong_default_animal->makeSound();
    wrong_j->makeSound();

    delete wrong_default_animal;
    delete wrong_j;

    return 0;
}