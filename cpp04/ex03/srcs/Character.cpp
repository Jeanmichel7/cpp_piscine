/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:01:42 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 07:36:51 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
				std::cout << "Type of material not recognized" << std::endl;
				return;
			}
			std::cout << "Equipe materia " << m->getType() << " (" << i + 1 << "/4)" << std::endl;
			_item[i] = m;
			return;
		}
	}
	if (i == 4)
	{
		std::cout << "Cannot equip materia because player is full" << std::endl;
		delete m;
	}
	return;
}

void Character::unequip(int idx)
{
	int idx_new = 0;

	for (int i = 0; i < 4; i++)
	{
		if (_trash[i] == NULL)
		{
			idx_new = i;
			break;
		}
	}

	std::cout << "Trash : (" << idx_new + 1 << "/4)" << std::endl;

	if (idx_new == 3)
	{
		std::cout << "Trash full -> delete all materia" << std::endl;
		for (int i = 0; i < 4; i++)
		{
			delete _trash[i];
			_trash[i] = NULL;
		}
		idx_new = 0;
	}

	if (idx > 3 || _item[idx] == NULL)
	{
		std::cout << "Cannot unequip item " << idx + 1 << "/4" << std::endl;
		return;
	}
	else
		std::cout << "Player unequip item " << idx + 1 << "/4" << std::endl;

	_trash[idx_new] = _item[idx];
	_item[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (_item[idx] != NULL)
	{
		std::cout << "Use materia " << _item[idx]->getType() << " on " << target.getName() << std::endl;
		_item[idx]->use(target);
	}
	else
		std::cout << "Materia not found" << std::endl;
}
