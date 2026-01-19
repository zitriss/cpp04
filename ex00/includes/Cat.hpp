/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:52:00 by tlize             #+#    #+#             */
/*   Updated: 2026/01/19 14:46:36 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &old_cat);
	Cat &operator=(const Cat &old_cat);
	~Cat();

	std::string	getType(void) const;
	void	makeSound(void) const;
private:
	std::string type;
};

#endif