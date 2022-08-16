/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:11 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/16 16:09:36 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\033[0;34m"
#define END "\033[0m"

#include "Cat.hpp"

/* Canonique */
Cat::Cat() : Animal()
{
	std::cout << "Constructor Cat" << std::endl;
	
	static int i = 0;
	_type = "Cat";
	_ptr_brain = new Brain();
	_ptr_brain->setIdea1(i);
	i++;
	return;
}
Cat::Cat(Cat const &tmp) : Animal(tmp)
{
	std::cout << "Constructor de copie Cat" << std::endl;
	
	static int i = 0;
	_ptr_brain = new Brain();
	_ptr_brain->setIdea1( i );
	i++;

	return;
}
Cat::~Cat()
{
	delete _ptr_brain;
	std::cout << "Destrutor Cat" << std::endl;
	return;
}
void	Cat::operator =(Cat const &tmp)
{
	std::cout << "Constructor d'affectation Cat" << std::endl;

	_type = tmp._type;

	static int i = 0;
	_ptr_brain = new Brain();
	_ptr_brain->setIdea1( i );
	i++;
	
	return;
}


/* Fct member */
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
