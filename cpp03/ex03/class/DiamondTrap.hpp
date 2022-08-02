/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:57:00 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/02 17:04:38 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMOND_TRAP__
# define __DIAMOND_TRAP__

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	const	_name;
	

public:
	DiamondTrap();
	DiamondTrap(std::string	const name);
	~DiamondTrap();

	void	setHit(int n);
	void	setEnergy(int n);
	void	setDamage(int n);

	void		attack(const std::string& target);
	std::string	getNameClapTrap(void) const;
	void		whoAmI();
};



#endif