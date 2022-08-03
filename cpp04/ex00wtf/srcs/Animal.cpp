/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:02 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 00:23:42 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Constructor Animal" << std::endl;
	return;
}

Animal::Animal(Animal const &tmp) : _type(tmp._type)
{
	return;
}

Animal::~Animal()
{
	std::cout << "Destrutor Animal" << std::endl;
	return;
}

void	Animal::operator =(Animal const &tmp)
{
	_type = tmp._type;
	return;
}



std::string Animal::getType() const
{
	return (_type);
}



void	Animal::makeSound() const
{
	std::cout << "No sound specific" << std::endl;
}