/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:21:41 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/05 12:00:55 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAP_TRAP_HPP__
# define __CLAP_TRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string	const	_name;
	int 				_hit;
	int 				_energy;
	int 				_damage;

public:
	ClapTrap();
	ClapTrap( const std::string name );
	ClapTrap( const ClapTrap &copie );
	void operator=( const ClapTrap &n );
	~ClapTrap();

	std::string	getName( void ) const;
	int			getHit( void ) const;
	int			getEnergy( void ) const;
	int			getDamage( void ) const;

	void		setHit( int hit);
	void		setEnergy( int energy);
	void		setDamage( int damage);

	void 		attack(const std::string& target);
	void 		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);
};

std::ostream &operator<<(std::ostream &cout, const ClapTrap &instance);

#endif