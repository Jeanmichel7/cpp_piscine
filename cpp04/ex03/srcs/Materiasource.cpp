/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materiasource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:21:28 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 06:10:47 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materiasource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 10; i++)
		_m_tmp[i] = NULL;
	return;
}

MateriaSource::~MateriaSource()
{
	return;
}

MateriaSource::MateriaSource(MateriaSource const &tmp)
{
	for(int i = 0; i < 10; i++)
		_m_tmp[i] = tmp._m_tmp[i];
	return;
}

void MateriaSource::operator = (MateriaSource const &tmp)
{
	for(int i = 0; i < 10; i++)
		_m_tmp[i] = tmp._m_tmp[i];
	return;
}





void MateriaSource::learnMateria(AMateria *tmp)
{
	int idx_new_pos = 0;

	for(int i = 0; i < 10; i++)
	{
		if (_m_tmp[i] == NULL)
		{
			idx_new_pos = i;
			break;
		}
	}
	_m_tmp[idx_new_pos] = tmp;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
/*
Retourne une nouvelle Materia. Celle-ci est une copie de celle apprise
précédemment par la MateriaSource et dont le type est le même que celui passé en paramètre.
Retourne 0 si le type est inconnu.
*/
	AMateria *tmp;

	for(int i = 0; i < 10; i++)
	{
		if (_m_tmp[i]->getType() == type)
		{
			std::cout << "meme type !!" << type << std::endl;

			if (type == "Ice")
				tmp = new Ice();
			else if (type == "Cure")
				tmp = new Cure();
			else
				tmp = 0;
			return tmp;
		}
	}

	std::cout << "  type non reconnu pour create new materia " << std::endl;
	return 0;
}
