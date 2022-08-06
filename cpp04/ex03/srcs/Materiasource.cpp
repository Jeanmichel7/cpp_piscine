/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materiasource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:21:28 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 13:59:14 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define TST "\033[0;33m"
#define BLU "\033[0;34m"
#define TST2 "\033[0;35m"
#define END "\033[0m"
#define UND "\e[4m"

#include "Materiasource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_m_tmp[i] = NULL;
	return;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_m_tmp[i] != NULL)
			delete _m_tmp[i];
	}
	return;
}

MateriaSource::MateriaSource(MateriaSource const &tmp)
{
	for (int i = 0; i < 4; i++)
		_m_tmp[i] = tmp._m_tmp[i];
	return;
}

void MateriaSource::operator=(MateriaSource const &tmp)
{
	for (int i = 0; i < 4; i++)
		_m_tmp[i] = tmp._m_tmp[i];
	return;
}

void MateriaSource::learnMateria(AMateria *tmp)
{
	int idx_new_pos = 0;
	int i;
	for (i = 0; i < 4; i++)
	{
		if (_m_tmp[i] == NULL)
		{
			idx_new_pos = i;
			break;
		}
	}
	if (i == 4)
	{
		std::cout << RED "Cannot learn materia," END " full inventory" << std::endl;
		delete tmp;
		return;
	}
	else
	{
		std::cout << GRN "Learn materia : " << tmp->getType() << " " << i + 1 << "/4" END << std::endl;
		_m_tmp[idx_new_pos] = tmp;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_m_tmp[i] == NULL)
		{
			AMateria *tmp;
			if (type == "ice")
				tmp = new Ice();
			else if (type == "cure")
				tmp = new Cure();
			else
				tmp = NULL;
			std::cout << BLU "Create materia '" << type << "'" END << std::endl;
			return tmp;
		}
	}
	std::cout << RED "type '" << type << "' cannot create new materia " END << std::endl;
	return NULL;
}
