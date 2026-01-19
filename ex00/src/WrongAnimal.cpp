/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 18:46:44 by tlize             #+#    #+#             */
/*   Updated: 2026/01/19 14:46:59 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "notype";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
	this->type = type;
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &old_WrongAnimal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = old_WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &old_WrongAnimal)
{
	std::cout << "WrongAnimal copy assignement operator called" << std::endl;
	if (this == &old_WrongAnimal)
		return *this;
	this->type = old_WrongAnimal.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal " << this->type << " made a Sound !" << std::endl;
}