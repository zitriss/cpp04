/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:52:26 by tlize             #+#    #+#             */
/*   Updated: 2026/01/20 15:00:47 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &old_dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = old_dog;
	brain = new Brain(*old_dog.brain);
}

Dog &Dog::operator=(const Dog &old_dog)
{
	std::cout << "Dog copy assignement operator called" << std::endl;
	if (this == &old_dog)
		return *this;
	this->type = old_dog.type;
	brain = new Brain(*old_dog.brain);
	return *this;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark" << std::endl;
}