/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:11 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 00:59:31 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\e[0;34m"
#define END "\e[0m"

#include "Wrongcat.hpp"
#include "Wronganimal.hpp"

WrongCat::WrongCat() : _type("WrongCat")
{
	std::cout << "Constructor WrongCat" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const &tmp) : WrongAnimal(tmp)
{
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "Destrutor WrongCat" << std::endl;
	return;
}

void	WrongCat::operator =(WrongCat const &tmp)
{
	_type = tmp._type;
	return;
}

std::string WrongCat::getType() const
{
	return (_type);
}

void	WrongCat::makeSound() const
{
	std::cout << BLU "🔊 Wrong Miaou" END << std::endl;
}
