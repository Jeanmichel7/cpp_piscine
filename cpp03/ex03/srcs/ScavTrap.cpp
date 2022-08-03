/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:43:08 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/03 19:51:16 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRY	"\e[1;30m"
#define END	"\e[0m"

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << GRY "Dervied class	CONSTRUCTOR called - " END << std::endl;
	return; 
}

ScavTrap::ScavTrap( const std::string name ) : ClapTrap( name )
{
	std::cout << GRY "Dervied class	CONSTRUCTOR called - " END << getName() << std::endl;
	return; 
}

ScavTrap::ScavTrap( const ScavTrap &tmp ) : ClapTrap( tmp )
{
	std::cout << GRY "Dervied class	COPY CONSTRUCTOR called - " END << getName() << std::endl;
	return; 
}

ScavTrap &ScavTrap::operator= ( const ScavTrap &tmp )
{
	std::cout << GRY "Derived class	COPY ASSIGNMENT operator called" END << std::endl;

	static_cast<ClapTrap &>(*this) = tmp;
	setHit(tmp.getHit());
	setEnergy(tmp.getEnergy());
	setDamage(tmp.getDamage());
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << GRY "Derived class	destructor called - " END << getName() << std::endl;
	return ;
}


/* MEMBER FUNCITIONS */

void ScavTrap::guardGate(void)
{
	std::cout << std::endl << this->getName()
	<< " is in Gate keeper node!" << std::endl << std::endl;
}