/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:11 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/11 14:31:48 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\033[0;34m"
#define END "\033[0m"

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

/* Canonique */
Cat::Cat() : Animal()
{
	static int i = 0;
	std::cout << "Constructor Cat" << std::endl;
	_type = "Cat";
	_ptr_brain = new Brain();
	_ptr_brain->setIdea1(i);
	i++;
	return;
}
Cat::Cat(Cat const &tmp) : Animal(tmp)
{
	return;
}
Cat::~Cat()
{
	std::cout << "Destrutor Cat" << std::endl;
	delete _ptr_brain;
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

Brain *Cat::AGetBrain() const
{
	return (_ptr_brain);
}

void	Cat::makeSound() const
{
	std::cout << BLU "🔊 Miaou" END << std::endl;
}
