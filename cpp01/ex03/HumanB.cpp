/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:46:03 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/06 16:31:00 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void	HumanB::setWeapon(Weapon weapon)
{
	*(this->_humanBWeapon) = weapon;
}

void	HumanB::attack()
{
	std::cout
	<< this->_name
	<< " attacks with their "
	<< this->_humanBWeapon->getType()
	<< std::endl;
}