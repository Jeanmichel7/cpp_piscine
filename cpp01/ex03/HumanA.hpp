/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:45:57 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/06 15:34:03 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>


class HumanA
{

private:
	std::string 	_name;
	Weapon 			&_humanAWeapon;

public:
	HumanA(std::string name, Weapon &humanAWeapon);
	~HumanA();
	void	attack();

};

#endif