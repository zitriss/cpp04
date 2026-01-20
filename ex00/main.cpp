/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:12:26 by tlize             #+#    #+#             */
/*   Updated: 2026/01/20 14:51:28 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	WrongCat*	  c = new WrongCat;
    const Animal* l = i;
    const WrongAnimal* k = new WrongCat();
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
	
    std::cout << std::endl;
    i->makeSound();
    l->makeSound();
    j->makeSound();
    k->makeSound();
	c->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    delete k;
    return 0;
}