/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:52:03 by tlize             #+#    #+#             */
/*   Updated: 2026/01/20 12:22:58 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &old_Dog);
	Dog &operator=(const Dog &old_Dog);
	~Dog();

	std::string	getType(void) const;
	void	makeSound(void) const;
private:
	std::string type;
	Brain	*brain;
};

#endif