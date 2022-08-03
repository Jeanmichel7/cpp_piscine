/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:02 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 00:42:39 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "Constructor WrongAnimal" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &tmp) : _type(tmp._type)
{
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destrutor WrongAnimal" << std::endl;
	return;
}

void	WrongAnimal::operator =(WrongAnimal const &tmp)
{
	_type = tmp._type;
	return;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "No wrong sound specific" << std::endl;
}