/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:45:54 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/06 15:52:37 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string weapon_name)
{
	this->_type = weapon_name;
	return;
}

Weapon::~Weapon()
{
	return;
}

const std::string Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string weapon_name)
{
	this->_type = weapon_name;
}