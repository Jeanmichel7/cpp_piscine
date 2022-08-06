/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:36:53 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 04:30:41 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :_type("ice")
{
	return;
}

Ice::Ice(Ice const &tmp) : AMateria(tmp)
{
	return;
}

Ice::~Ice()
{
	return;
}

void Ice::operator =(Ice const &tmp)
{
	_type = tmp._type;
	return;
}






AMateria *Ice::clone() const
{
	AMateria *new_mat = new Ice();
	return (new_mat);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


