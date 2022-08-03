/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:42:26 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/03 19:35:59 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAV_TRAP_HPP__
# define __SCAV_TRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap( void );
	ScavTrap( std::string const name );
	ScavTrap( ScavTrap const &tmp );
	ScavTrap &operator=( ScavTrap const &tmp );
	~ScavTrap();

	void guardGate();

};




#endif