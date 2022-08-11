/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:21:59 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/11 14:31:48 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\033[0;34m"
#define END "\033[0m"

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : _type("Dog")
{
	std::cout << "Constructor Dog" << std::endl;
	return;
}

Dog::Dog(Dog const &tmp) : Animal(tmp)
{
	return;
}

Dog::~Dog()
{
	std::cout << "Destrutor Dog" << std::endl;
	return;
}

void	Dog::operator =(Dog const &tmp)
{
	_type = tmp._type;
	return;
}

std::string Dog::getType() const
{
	return (_type);
}

void	Dog::makeSound() const
{
	std::cout << BLU "🔊 Whouf" END << std::endl;
}