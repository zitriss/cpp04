/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:12:35 by tlize             #+#    #+#             */
/*   Updated: 2026/01/13 19:21:54 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "notype";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type)
{
	this->type = type;
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &old_animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = old_animal;
}

Animal &Animal::operator=(const Animal &old_animal)
{
	std::cout << "Animal copy assignement operator called" << std::endl;
	if (this == &old_animal)
		return *this;
	this->type = old_animal.type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

void	Animal::makeSound(void)
{
	std::cout << "Animal " << this->type << " made a Sound !" << std::endl;
}