/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:01:42 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 06:16:59 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
	for(int i = 0; i < 4; i++)
	{
		_item[i] = NULL;
		_trash[i] = NULL;
	}
	return;
}
Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < 4; i++)
	{
		_item[i] = NULL;
		_trash[i] = NULL;
	}
	return;
}
Character::~Character()
{
	for(int i = 0; i < 4; i++)
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
	for(int i = 0; i < 4; i++)
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
void	Character::operator= (Character const &tmp)
{
	_name = tmp._name;
	for(int i = 0; i < 4; i++)
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
void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (_item[i] == NULL)
		{
			_item[i] = m;
			break;
		}
	}
	return;
}
void Character::unequip(int idx)
{
	int idx_new = 0;

	for(int i = 0; i < 4; i++)
	{
		if (_trash[i] == NULL)
		{
			idx_new = i;
			break;
		}
	}
	std::cout << "index pos dispo dans track : " << idx_new << std::endl;

	if (idx_new == 4)
	{
		std::cout << "Trash full -> delete all materia" << std::endl;
		for(int i = 0; i < 4; i++)
		{
			delete _trash[i];
		}
		idx_new = 0;
	}

	_trash[idx_new] = _item[idx];
	_item[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	_item[idx]->use(target);
}

