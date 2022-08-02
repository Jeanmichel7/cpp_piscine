/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:46:03 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/02 21:56:20 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _humanBWeapon(NULL)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_humanBWeapon = &weapon;
	return;
}

void	HumanB::attack()
{
	std::cout
	<< this->_name 
	<< " attacks with their "
	<< ( _humanBWeapon == NULL ? "" : _humanBWeapon->getType() )
	<< std::endl;
}