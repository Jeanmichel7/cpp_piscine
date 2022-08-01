/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:42:26 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/02 01:00:24 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAV_TRAP_HPP__
# define __SCAV_TRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap( const std::string name );
	ScavTrap( const ScavTrap & );
	ScavTrap &operator=( const ScavTrap & );
	~ScavTrap();

	void guardGate();

};




#endif