/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Characterinterface.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:01:45 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 03:12:29 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "Characterinterface.hpp"


ICharacter::ICharacter() : _name("")
{
    return;
}

ICharacter::ICharacter(std::string name) : _name(name)
{
    return;
}

ICharacter::~ICharacter()
{
    return;
}

void ICharacter::equip(AMateria* m)
{

}
