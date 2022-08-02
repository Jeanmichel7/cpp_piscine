/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamandTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:57:10 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/02 17:06:51 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	FragTrap::setHit(FragTrap::getHit());
	ScavTrap::setEnergy(ScavTrap::getEnergy());
	FragTrap::setDamage(FragTrap::getDamage());
	return;
}


DiamondTrap::DiamondTrap(std::string const name)
{
	FragTrap::setHit(FragTrap::getHit());
	ScavTrap::setEnergy(ScavTrap::getEnergy());
	FragTrap::setDamage(FragTrap::getDamage());
	return;
}

DiamondTrap::~DiamondTrap()
{
}

void DiamondTrap::setHit(int n)
{
	FragTrap::setHit(n);
}
void DiamondTrap::setEnergy(int n)
{
	ScavTrap::setEnergy(n);
}
inline void DiamondTrap::setDamage(int n)
{
	FragTrap::setDamage(n);
}
inline void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "I am " << _name
	<< " ou " << getNameClapTrap()
	<< "and my Sub object is " << FragTrap::getName()
	<< std::endl; // bad name
}

inline std::string	DiamondTrap::getNameClapTrap(void) const
{
	return (ScavTrap::getName());					// bad name
}