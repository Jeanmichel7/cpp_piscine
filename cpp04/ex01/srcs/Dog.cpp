/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:21:59 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/16 16:17:28 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\033[0;34m"
#define END "\033[0m"

#include "Dog.hpp"

/* Canonique */
Dog::Dog() : Animal()
{
	std::cout << "Constructor Dog" << std::endl;
	
	static int i = 0;
	_ptr_brain = new Brain();
	_ptr_brain->setIdea1( i );
	i++;
	return;
}
Dog::Dog(Dog const &tmp) : Animal(tmp)
{
	std::cout << "Constructor de copie Dog" << std::endl;
	
	static int i = 0;
	_ptr_brain = new Brain();
	_ptr_brain->setIdea1( i );
	i++;

	return;
}
Dog::~Dog()
{
	delete _ptr_brain;
	std::cout << "Destrutor Dog" << std::endl;
	return;
}
void	Dog::operator =(Dog const &tmp)
{
	std::cout << "Constructor d'affectation Dog" << std::endl;

	_type = tmp._type;
	static int i = 0;
	_ptr_brain = new Brain();
	_ptr_brain->setIdea1( i );
	i++;
	
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