/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:52:29 by tlize             #+#    #+#             */
/*   Updated: 2026/01/20 15:00:55 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &old_cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = old_cat;
	brain = new Brain(*old_cat.brain);
}

Cat &Cat::operator=(const Cat &old_cat)
{
	std::cout << "Cat copy assignement operator called" << std::endl;
	if (this == &old_cat)
		return *this;
	this->type = old_cat.type;
	brain = new Brain(*old_cat.brain);
	return *this;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow ᓚᘏᗢ" << std::endl;
}