/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materiasource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:21:28 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 06:42:44 by jrasser          ###   ########.fr       */
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
	for(int i = 0; i < 10; i++)
	{
		if (_m_tmp[i] != NULL)
			delete _m_tmp[i];
	}
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
	std::cout << "learn materia : "<< tmp->getType() << std::endl;
	_m_tmp[idx_new_pos] = tmp;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 10; i++)
	{
		if (_m_tmp[i] != NULL && _m_tmp[i]->getType() == type)
		{
			AMateria *tmp;
			if (type == "ice")
				tmp = new Ice();
			else if (type == "cure")
				tmp = new Cure();
			else
				tmp = 0;
			return tmp;
		}
	}
	std::cout << "type '"<< type <<"' non reconnu pour create new materia " << std::endl;
	return 0;
}
