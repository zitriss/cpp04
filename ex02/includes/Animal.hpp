/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:12:42 by tlize             #+#    #+#             */
/*   Updated: 2026/01/20 12:47:28 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &old_animal);
	Animal &operator=(const Animal &old_animal);
	virtual	~Animal();

	virtual	void	makeSound(void) const = 0;
	virtual	std::string	getType(void) const = 0;
protected:
	std::string type;	
};

#endif