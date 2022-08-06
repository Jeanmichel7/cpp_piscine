/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materiasource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:21:28 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 02:50:25 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materiasource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() : _m_tmp(NULL)
{
	return;
}

MateriaSource::~MateriaSource()
{
	return;
}




void MateriaSource::learnMateria(AMateria *tmp)
{
	_m_tmp = tmp;
	return;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *new_ama;
	
	if (type == "ice")
		new_ama = new Ice();
	else if (type == "cure")
		new_ama = new Cure();
	else
		return (0);

	return new_ama;
}
