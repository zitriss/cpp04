/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:12:42 by tlize             #+#    #+#             */
/*   Updated: 2026/01/13 18:54:48 by tlize            ###   ########.fr       */
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
	~Animal();

	void	makeSound(void);
protected:
	std::string type;	
};

#endif