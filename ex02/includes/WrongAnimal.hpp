/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:34:45 by tlize             #+#    #+#             */
/*   Updated: 2026/01/19 14:46:27 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &old_wrong);
	WrongAnimal &operator=(const WrongAnimal &old_wrong);
	~WrongAnimal();

	std::string	getType(void) const;
	void	makeSound(void) const;
private:
	std::string	type;
};

#endif