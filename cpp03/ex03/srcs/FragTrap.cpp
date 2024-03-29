/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:05:16 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/10 19:50:40 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRY	"\033[1;30m"
#define END	"\033[0m"

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << GRY "Dervied BIS class	CONSTRUCTOR called - " END << std::endl;
	return; 
}

FragTrap::FragTrap(std::string const name) : ClapTrap( name )
{
	std::cout << GRY "Dervied BIS class	CONSTRUCTOR called - " END << getName() << std::endl;
	return; 
}

FragTrap::FragTrap( FragTrap const &tmp) : ClapTrap( tmp )
{
	std::cout << GRY "Dervied BIS class	COPY CONSTRUCTOR called - " END << getName() << std::endl;
	return;
}

FragTrap &FragTrap::operator= (FragTrap const &tmp)
{
	std::cout << GRY "Derived BIS class	COPY ASSIGNMENT operator called" END << std::endl;

	static_cast<ClapTrap &>(*this) = tmp;
	setHit(tmp.getHit());
	setEnergy(tmp.getEnergy());
	setDamage(tmp.getDamage());
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << GRY "Dervied BIS class	CONSTRUCTOR called - " END << getName() << std::endl;
	return; 
}