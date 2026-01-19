/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 18:57:59 by tlize             #+#    #+#             */
/*   Updated: 2026/01/17 19:03:33 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &old_wrongcat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = old_wrongcat;
}

WrongCat &WrongCat::operator=(const WrongCat &old_wrongcat)
{
	std::cout << "WrongCat copy assignement operator called" << std::endl;
	if (this == &old_wrongcat)
		return *this;
	this->type = old_wrongcat.type;
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
}
std::string	WrongCat::getType(void) const
{
	return (this->type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Not Meow" << std::endl;
}