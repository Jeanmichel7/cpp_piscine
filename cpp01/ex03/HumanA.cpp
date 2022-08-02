/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:45:59 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/02 22:16:14 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &humanAWeapon) : _name(name), _humanAWeapon(humanAWeapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::attack()
{
	std::cout
	<< this->_name
	<< " attacks with their "
	<< this->_humanAWeapon.getType()
	<< std::endl;
}
