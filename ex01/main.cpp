/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:12:26 by tlize             #+#    #+#             */
/*   Updated: 2026/01/20 12:27:27 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta[10];
    const Animal** copy;

    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
        meta[i] = new Cat();
    std::cout << std::endl;
    for (int i = 5; i < 10; i++)
        meta[i] = new Dog();
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << meta[i]->getType() << " " << std::endl;
        meta[i]->makeSound();
    }
    std::cout << std::endl;
    copy = meta;
    for (int i = 0; i < 10; i++)
    {
        std::cout << copy[i]->getType() << " " << std::endl;
        copy[i]->makeSound();
    }
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
        delete meta[i];
    return 0;
}