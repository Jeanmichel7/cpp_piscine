/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:04 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/16 16:12:18 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <iostream>
#include "Brain.hpp"

class Animal
{

protected:
	std::string	_type;

public:
	Animal();
	Animal(Animal const &);
	virtual ~Animal();
	void operator =(Animal const &);
	
	virtual std::string	getType() const;
	virtual Brain		*AGetBrain() const = 0;
	virtual void		makeSound() const;

};

#endif