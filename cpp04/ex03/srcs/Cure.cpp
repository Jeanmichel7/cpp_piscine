/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:44:13 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 02:37:46 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :_type("cure")
{
	return;
}

Cure::Cure(Cure const &tmp) : AMateria(tmp)
{
	return;
}

Cure::~Cure()
{
	return;
}

void Cure::operator =(Cure const &tmp)
{
	_type = tmp._type;
	return;
}






AMateria *Cure::clone() const
{
	AMateria *new_mat = new Cure();
	return (new_mat);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

