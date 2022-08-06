/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:01:42 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 14:10:20 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED "\033[0;31m"
#define PRP "\033[0;35m"
#define GRY	"\033[1;30m"
#define UND "\033[4m"
#define END "\033[0m"

#include "Character.hpp"

Character::Character() : _name("")
{
	for (int i = 0; i < 4; i++)
	{
		_item[i] = NULL;
		_trash[i] = NULL;
	}
	return;
}
Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_item[i] = NULL;
		_trash[i] = NULL;
	}
	return;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_item[i] != NULL)
			delete _item[i];
		if (_trash[i] != NULL)
			delete _trash[i];
	}
	return;
}
Character::Character(Character const &tmp)
{
	AMateria *new_mat[4];
	AMateria *new_trash[4];

	_name = tmp._name;
	for (int i = 0; i < 4; i++)
	{
		// check old materia
		if (_item[i] != NULL)
			delete _item[i];
		if (_trash[i] != NULL)
			delete _trash[i];

		// copie new materia
		new_mat[i] = tmp._item[i];
		new_trash[i] = tmp._trash[i];
	}
	*_item = *new_mat;
	*_trash = *new_trash;
	return;
}
void Character::operator=(Character const &tmp)
{
	_name = tmp._name;
	for (int i = 0; i < 4; i++)
	{
		// check old materia
		if (_item[i] != NULL)
			delete _item[i];
		if (_trash[i] != NULL)
			delete _trash[i];

		// copie new materia
		_item[i] = tmp._item[i];
		_trash[i] = tmp._trash[i];
	}
	return;
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (_item[i] == NULL)
		{
			if (m == NULL)
			{
				std::cout << RED "Type of materia not recognized" END << std::endl;
				return;
			}
			std::cout << PRP << getName() << " equipe materia " << m->getType() << " : item[" << i << "]" END << std::endl;
			_item[i] = m;
			return;
		}
	}
	if (i == 4)
	{
		std::cout << RED "Cannot equip materia because player is full" END<< std::endl;
		delete m;
	}
	return;
}

void Character::unequip(int idx)
{
	int idx_new = 0;
	int i;
	for (i = 0; i < 4; i++)
	{
		if (_trash[i] == NULL)
		{
			idx_new = i;
			break;
		}
	}
	if (i == 4)
	{
		std::cout << RED "Trash full -> delete all materia" END << std::endl;
		for (int i = 0; i < 4; i++)
		{
			delete _trash[i];
			_trash[i] = NULL;
		}
		idx_new = 0;
	}

	if (idx > 3 || _item[idx] == NULL)
	{
		std::cout << "Cannot unequip item[" << idx << "]" << std::endl;
		return;
	}
	else
		std::cout << GRY << getName() << " unequip item[" << idx << "]" END << std::endl << std::endl;

	_trash[idx_new] = _item[idx];
	_item[idx] = NULL;
	std::cout << "Trash : (" << idx_new + 1 << "/4)" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (_item[idx] != NULL)
	{
		std::cout << getName() << " use materia " << _item[idx]->getType() << " on " << target.getName() << std::endl;
		_item[idx]->use(target);
	}
	else
		std::cout << "Materia not found" << std::endl;
}
