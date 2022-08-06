/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:21:59 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/05 19:47:36 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\e[0;34m"
#define END "\e[0m"

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"


/* Canonique */
Dog::Dog() : _type("Dog")
{
	static int i = 0;
	std::cout << "Constructor Dog" << std::endl;
	_ptr_brain = new Brain();
	_ptr_brain->setIdea1( i );
	i++;
	return;
}
Dog::Dog(Dog const &tmp) : Animal(tmp)
{
	return;
}
Dog::~Dog()
{
	std::cout << "Destrutor Dog" << std::endl;
	delete _ptr_brain;
	return;
}
void	Dog::operator =(Dog const &tmp)
{
	_type = tmp._type;
	return;
}

/* Function */
std::string Dog::getType() const
{
	return (_type);
}
Brain *Dog::AGetBrain() const
{
	return (_ptr_brain);
}


void	Dog::makeSound() const
{
	std::cout << BLU "🔊 Whouf" END << std::endl;
}