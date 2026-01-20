/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 18:58:14 by tlize             #+#    #+#             */
/*   Updated: 2026/01/19 14:46:40 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &old_wrongcat);
	WrongCat &operator=(const WrongCat &old_wrongcat);
	~WrongCat();

	std::string	getType(void) const;
	void	makeSound(void) const;
private:
	std::string type;
};

#endif