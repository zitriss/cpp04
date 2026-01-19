/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:52:29 by tlize             #+#    #+#             */
/*   Updated: 2026/01/19 15:20:16 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &old_cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = old_cat;
}

Cat &Cat::operator=(const Cat &old_cat)
{
	std::cout << "Cat copy assignement operator called" << std::endl;
	if (this == &old_cat)
		return *this;
	this->type = old_cat.type;
	return *this;
}

Cat::~Cat(void)
{
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