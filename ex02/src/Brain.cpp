/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:45:33 by tlize             #+#    #+#             */
/*   Updated: 2026/01/20 12:21:49 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &old_brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = old_brain;
}

Brain &Brain::operator=(const Brain &old_brain)
{
	std::cout << "Brain copy assignement operator called" << std::endl;
	if (this == &old_brain)
		return *this;
	std::copy(old_brain.ideas, old_brain.ideas + 100, this->ideas);
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
}