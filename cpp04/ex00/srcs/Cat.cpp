/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:11 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/05 12:24:44 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\e[0;34m"
#define END "\e[0m"

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : _type("Cat")
{
	std::cout << "Constructor Cat" << std::endl;
	return;
}

Cat::Cat(Cat const &tmp) : Animal(tmp)
{
	return;
}

Cat::~Cat()
{
	std::cout << "Destrutor Cat" << std::endl;
	return;
}

void	Cat::operator =(Cat const &tmp)
{
	_type = tmp._type;
	return;
}

std::string Cat::getType() const
{
	return (_type);
}

void	Cat::makeSound() const
{
	std::cout << BLU "🔊 Miaou" END << std::endl;
}