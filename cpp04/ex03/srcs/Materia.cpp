/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:22:36 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/06 00:34:06 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria() : _type("")
{
	return;
}
AMateria::AMateria(std::string const &type) : _type(type)
{
	return;
}

AMateria::AMateria(AMateria const &tmp) : _type(tmp._type)
{
	return;
}

AMateria::~AMateria()
{
	return;
}

void AMateria::operator =(AMateria const &tmp)
{
	_type = tmp._type;
	return;
}




std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Nothings to display" << std::endl;
}