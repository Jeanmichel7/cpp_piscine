/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Characterinterface.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:09:19 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 03:12:34 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_HPP__
# define __ICHARACTER_HPP__

#include <iostream>
#include "Materia.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Characterinterface.hpp"
#include "Character.hpp"
#include "Materiasourceinterface.hpp"
#include "Materiasource.hpp"

class ICharacter
{

protected:
	std::string		_name;
	//const AMateria *_item[4];
	//const AMateria *_trash[10];

public:
	ICharacter();
	ICharacter(std::string name);
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif